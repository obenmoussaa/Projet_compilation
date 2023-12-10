%{

#include "Table_des_symboles.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  extern int yylex();
  extern int yyparse();

  int depth=0;
  int cmp=1;


  void yyerror (char* s) {
    printf ("%s\n",s);
    exit(0);
  }
		

 
 char* concatenate_strings(const char* str1, const char* str2) {   
    char result[strlen(str1) + strlen(str2) + 1];
    strcpy(result, str1);
    strcat(result, str2);
    char* final_result = strdup(result);
    if (final_result == NULL) {
      fprintf(stderr, "Erreur lors de l'allocation de mémoire.\n");
    }
    return final_result;
  }

  // pour le branchement Conditionel
  int make_label(){
    static int n = 0;
    return n++;
  }

  //pour la boucle while
  int make_label2(){
    static int m = 0;
    return m++;
  }

  // pour gérer toutes opérations arithmetiques
  void generale_expression(int $1, int $3, char c, int INT, int FLOAT){
    int $$; // pour stocker le type des arguments int ou float
    if($1==INT && $3 == INT){ 
      $$=INT;
    };
    if(($1 == INT && $3 == FLOAT)  || ($1 == FLOAT && $3 == INT)){
      if(cmp==1) {
	printf("I2F\n");
	cmp++;
      }

      else{
        printf("I2F%d\n",cmp);
        cmp++;
      }
    
      $$=FLOAT;
    };
    if($1==FLOAT && $3 == FLOAT){   
      $$=FLOAT;
    };

    if($$ == INT){
      switch(c){
      case 'A':
        printf("ADDI\n");
        break;
      case 'M':
        printf("MULTI\n");
        break;
      case 'S':
        printf("SUBI\n");
        break;
      case 'D':
        printf("DIVI\n");
        break;
      default:
        break;
      }
    
    } 
    if ( $$ == FLOAT ){
      switch(c){
      case 'A':
        printf("ADDF\n");
        break;
      case 'M':
	printf("MULTF\n");
	break;
      case 'S':
	printf("SUBF\n");
	break;
      case 'D':
        printf("DIVF\n");
        break;
      default:
	break;
      }

    } 
  
  }


    %}

%union { 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;
}

%token <int_value> NUM
%token <float_value> DEC


%token INT FLOAT VOID

%token <string_value> ID
%token AO AF PO PF PV VIR
%token RETURN  EQ
%token <label_value> IF ELSE WHILE

%token <label_value> AND OR NOT DIFF EQUAL SUP INF
%token PLUS MOINS STAR DIV
%token DOT ARR

%nonassoc IFX
%left OR                       // higher priority on ||
%left AND                      // higher priority on &&
%left DIFF EQUAL SUP INF       // higher priority on comparison
%left PLUS MOINS               // higher priority on + - 
%left STAR DIV                 // higher priority on * /
%left DOT ARR                  // higher priority on . and -> 
%nonassoc UNA                  // highest priority on unary operator
%nonassoc ELSE


%{
  char * type2string (int c) {
    switch (c)
      {
      case INT:
	return("int");
      case FLOAT:
	return("float");
      case VOID:
	return("void");
      default:
	return("type error");
      }  
  };

  
  %}


%start prog  

 // liste de tous les non terminaux dont vous voulez manipuler l'attribut
%type <type_value> type exp  typename
%type <string_value> fun_head
 /* Attention, la rêgle de calcul par défaut $$=$1 
    peut créer des demandes/erreurs de type d'attribut */
%type <offset_value> prog glob_decl_list decl_list decl var_decl vlist 
%%

 // O. Déclaration globale

prog : glob_decl_list              {$$ = $1;}

glob_decl_list : glob_decl_list fun { $$ = $1;}
| glob_decl_list decl PV       {$$ = $2;}
|                              {$$ = -1;} // empty glob_decl_list shall be forbidden, but usefull for offset computation

// I. Functions

fun : type fun_head fun_body   {}
;

fun_head : ID PO PF            {
  // Pas de déclaration de fonction à l'intérieur de fonctions !
  if (depth>0) yyerror("Function must be declared at top level~!\n");
  if(strcmp($1, "main")==0)
    printf("void pcode_main()\n");
 }

| ID PO params PF              {
  // Pas de déclaration de fonction à l'intérieur de fonctions !
  if (depth>0) yyerror("Function must be declared at top level~!\n");
  char * argu = $<string_value>3;
  printf("%s pcode_%s( %s )", type2string($<type_value>0), $1,argu);
         
 }
;

params: type ID vir params     {
  $<string_value>$ = concatenate_strings(
					 concatenate_strings(
							     concatenate_strings(type2string($<type_value>1), " " ), concatenate_strings($2, ",")), 
					 $<string_value>4);
 } // récursion droite pour numéroter les paramètres du dernier au premier
| type ID                      { 
  $<string_value>$ = concatenate_strings(concatenate_strings(type2string($<type_value>1), " "), $2);}


vir : VIR                      {}
;

fun_body : fao block faf       {}
;

fao : AO                       { printf("{\n") ; }
;
faf : AF                       {printf("}\n") ; }
;


// II. Block
block:
decl_list inst_list            { }
;

// III. Declarations

decl_list : decl_list decl PV   {$$ = $1 + $2;} 
|                               { $$ = 0;}
;

decl: var_decl                  {$$ = $1;}
;

var_decl : type vlist          { $$ = $2; }
;


vlist: vlist vir ID {
  // Incrémente le compteur d'offset pour la variable actuelle
  $$ = $1 + 1; 
  // Met à jour la table des symboles 
  set_symbol_value($3, makeSymbol($<type_value>0, $$, depth));
  // Génère du code PCode pour initialiser la variable
  if ($<type_value>0 == INT) {
    printf("LOADI(0)\n");
  } 
  else if ($<type_value>0 == FLOAT) {
    printf("LOADF(0.0)\n");
  }
    
} 
| ID {
  $$ = $<int_value>-1 + 1;

  // Met à jour la table des symboles pour la variable
  set_symbol_value($1, makeSymbol($<type_value>0, $$, depth));

  // Génère du code PCode pour initialiser la variable
  if ($<type_value>0 == INT) {
    printf("LOADI(0)\n");
  } 
  else if ($<type_value>0 == FLOAT) {
    printf("LOADF(0.0)\n");
  }
    
}

;

type
: typename                     {}
;

typename
: INT                          {$$=INT;}
| FLOAT                        {$$=FLOAT;}
| VOID                         {$$=VOID;}
;

// IV. Intructions

inst_list: inst_list inst   {} 
| inst                      {}
;

pv : PV                       {}
;
 
inst:
ao block af                   {}
| aff pv                      {}
| ret pv                      {}
| cond                        {}
| loop                        {}
| pv                          {}
;

// Accolades explicites pour gerer l'entrée et la sortie d'un sous-bloc

ao : AO                       {printf("SAVEBP   //entering block\n"); depth++;}
;

af : AF                       {printf("RESTOREBP\n");depth--;}
;


// IV.1 Affectations

aff : ID EQ exp               { 
  printf("STOREP(%d)\n",get_symbol_value($1)->offset );
}
;


// IV.2 Return
ret : RETURN exp              { printf("return;\n");}
| RETURN PO PF                {printf("return();\n");}
;

// IV.3. Conditionelles
//           N.B. ces rêgles génèrent un conflit déclage reduction
//           qui est résolu comme on le souhaite par un décalage (shift)
//           avec ELSE en entrée (voir y.output)

cond :
if bool_cond inst  elsop       {}
;

elsop : else inst              {printf("End_%d\n", $<label_value>-2);}
|                  %prec IFX   {} // juste un "truc" pour éviter le message de conflit shift / reduce
;

bool_cond : PO exp PF         {  
  printf("GTF\n");
  printf("IFN(False_%d)\n", $<label_value>0);
}
;

if : IF                       {$<label_value>$ = make_label();}
;                                      


 else : ELSE                   {
   printf("GOTO(End_%d)\n", $<label_value>-2);
   printf("False_%d:\n", $<label_value>-2); 
	}
;

// IV.4. Iterations

loop : while while_cond inst  {printf("GOTO(StartLoop_%d)\n", $<label_value>1);
    printf("EndLoop_%d:\n", $<label_value>1);}
;

while_cond : PO exp PF        { 
  printf("GTI\n");
  printf("IFN(EndLoop_%d)\n", $<label_value>0);
}

while : WHILE                 {
  $<label_value>$ = make_label2();
  printf("StartLoop_%d:\n",$<label_value>$ );}
;


// V. Expressions

// V.1 Exp. arithmetiques
exp
: MOINS exp %prec UNA         {}
// -x + y lue comme (- x) + y  et pas - (x + y)
| exp PLUS exp           {
  generale_expression($1, $3, 'A', INT, FLOAT);
}
                              
| exp MOINS exp               {
  generale_expression($1, $3, 'S', INT, FLOAT);
}
                              
| exp STAR exp                {
  generale_expression($1, $3, 'M', INT, FLOAT);
}
                             
| exp DIV exp                {
  generale_expression($1, $3, 'D', INT, FLOAT);
}
| PO exp PF                   {}


| ID              {
  attribute attribue = get_symbol_value($1);
  if (attribue != NULL) {
    if (attribue->type == INT) {
      printf("LOADP(%d) // Loading %s value\n", attribue->offset,$1);
      $$ = INT;
    } else if (attribue->type == FLOAT) {
      printf("LOADP(%d) // Loading %s value\n", attribue->offset, $1);
      $$ = FLOAT;
    }
  } else {
    yyerror("Variable not declared");
  }
}
		 
| app                         {}
| NUM                         {$$ = INT ; printf("LOADI(%d)\n", $1 );}
| DEC                         {$$ = FLOAT; printf("LOADF(%f)\n", $1 );}


// V.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 {}
| exp SUP exp                 {}
| exp EQUAL exp               {}
| exp DIFF exp                {}
| exp AND exp                 {}
| exp OR exp                  {}

;

// V.3 Applications de fonctions


app : fid PO args PF          {}
;

fid : ID                      {}

args :  arglist               {}
|                             {}
;

arglist : arglist VIR exp     {} // récursion gauche pour empiler les arguements de la fonction de gauche à droite
| exp                         {}
;



%% 
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages 
     d'erreur usuel si besoin, et rediriger l'entrée standard 
     sur ce fichier pour lancer dessus la compilation.
  */

  char * header=
    "// PCode Header\n\
#include \"PCode.h\"\n\
\n\
int main() {\n\
pcode_main();\n\
return stack[sp-1].int_value;\n\
}\n";  

  printf("%s\n",header); // ouput header
  
  return yyparse ();
 
 
}
