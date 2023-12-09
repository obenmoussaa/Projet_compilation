/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"


#include "Table_des_symboles.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();
extern int yyparse();

int depth=0;
int cmp=0;


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

int make_label(){
  static int n = 0;
  return n++;
}

int make_label2(){
  static int m = 0;
  return m++;
}



#line 116 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    DEC = 259,                     /* DEC  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    VOID = 262,                    /* VOID  */
    ID = 263,                      /* ID  */
    AO = 264,                      /* AO  */
    AF = 265,                      /* AF  */
    PO = 266,                      /* PO  */
    PF = 267,                      /* PF  */
    PV = 268,                      /* PV  */
    VIR = 269,                     /* VIR  */
    RETURN = 270,                  /* RETURN  */
    EQ = 271,                      /* EQ  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    AND = 275,                     /* AND  */
    OR = 276,                      /* OR  */
    NOT = 277,                     /* NOT  */
    DIFF = 278,                    /* DIFF  */
    EQUAL = 279,                   /* EQUAL  */
    SUP = 280,                     /* SUP  */
    INF = 281,                     /* INF  */
    PLUS = 282,                    /* PLUS  */
    MOINS = 283,                   /* MOINS  */
    STAR = 284,                    /* STAR  */
    DIV = 285,                     /* DIV  */
    DOT = 286,                     /* DOT  */
    ARR = 287,                     /* ARR  */
    IFX = 288,                     /* IFX  */
    UNA = 289                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define DEC 259
#define INT 260
#define FLOAT 261
#define VOID 262
#define ID 263
#define AO 264
#define AF 265
#define PO 266
#define PF 267
#define PV 268
#define VIR 269
#define RETURN 270
#define EQ 271
#define IF 272
#define ELSE 273
#define WHILE 274
#define AND 275
#define OR 276
#define NOT 277
#define DIFF 278
#define EQUAL 279
#define SUP 280
#define INF 281
#define PLUS 282
#define MOINS 283
#define STAR 284
#define DIV 285
#define DOT 286
#define ARR 287
#define IFX 288
#define UNA 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "lang.y"
 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;

#line 247 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_DEC = 4,                        /* DEC  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_AO = 9,                         /* AO  */
  YYSYMBOL_AF = 10,                        /* AF  */
  YYSYMBOL_PO = 11,                        /* PO  */
  YYSYMBOL_PF = 12,                        /* PF  */
  YYSYMBOL_PV = 13,                        /* PV  */
  YYSYMBOL_VIR = 14,                       /* VIR  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_EQ = 16,                        /* EQ  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_OR = 21,                        /* OR  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_DIFF = 23,                      /* DIFF  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_SUP = 25,                       /* SUP  */
  YYSYMBOL_INF = 26,                       /* INF  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MOINS = 28,                     /* MOINS  */
  YYSYMBOL_STAR = 29,                      /* STAR  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_ARR = 32,                       /* ARR  */
  YYSYMBOL_IFX = 33,                       /* IFX  */
  YYSYMBOL_UNA = 34,                       /* UNA  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_prog = 36,                      /* prog  */
  YYSYMBOL_glob_decl_list = 37,            /* glob_decl_list  */
  YYSYMBOL_fun = 38,                       /* fun  */
  YYSYMBOL_fun_head = 39,                  /* fun_head  */
  YYSYMBOL_params = 40,                    /* params  */
  YYSYMBOL_vir = 41,                       /* vir  */
  YYSYMBOL_fun_body = 42,                  /* fun_body  */
  YYSYMBOL_fao = 43,                       /* fao  */
  YYSYMBOL_faf = 44,                       /* faf  */
  YYSYMBOL_block = 45,                     /* block  */
  YYSYMBOL_decl_list = 46,                 /* decl_list  */
  YYSYMBOL_decl = 47,                      /* decl  */
  YYSYMBOL_var_decl = 48,                  /* var_decl  */
  YYSYMBOL_vlist = 49,                     /* vlist  */
  YYSYMBOL_type = 50,                      /* type  */
  YYSYMBOL_typename = 51,                  /* typename  */
  YYSYMBOL_inst_list = 52,                 /* inst_list  */
  YYSYMBOL_pv = 53,                        /* pv  */
  YYSYMBOL_inst = 54,                      /* inst  */
  YYSYMBOL_ao = 55,                        /* ao  */
  YYSYMBOL_af = 56,                        /* af  */
  YYSYMBOL_aff = 57,                       /* aff  */
  YYSYMBOL_ret = 58,                       /* ret  */
  YYSYMBOL_cond = 59,                      /* cond  */
  YYSYMBOL_elsop = 60,                     /* elsop  */
  YYSYMBOL_bool_cond = 61,                 /* bool_cond  */
  YYSYMBOL_if = 62,                        /* if  */
  YYSYMBOL_else = 63,                      /* else  */
  YYSYMBOL_loop = 64,                      /* loop  */
  YYSYMBOL_while_cond = 65,                /* while_cond  */
  YYSYMBOL_while = 66,                     /* while  */
  YYSYMBOL_exp = 67,                       /* exp  */
  YYSYMBOL_app = 68,                       /* app  */
  YYSYMBOL_fid = 69,                       /* fid  */
  YYSYMBOL_args = 70,                      /* args  */
  YYSYMBOL_arglist = 71                    /* arglist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 82 "lang.y"

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

  
  

#line 363 "y.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   173

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   115,   116,   117,   121,   124,   130,   139,
     145,   149,   152,   155,   157,   163,   168,   169,   172,   175,
     179,   204,   236,   240,   241,   242,   247,   248,   251,   255,
     256,   257,   258,   259,   260,   265,   268,   274,   281,   282,
     291,   294,   295,   298,   304,   308,   316,   320,   325,   335,
     337,   363,   385,   412,   413,   416,   431,   432,   433,   438,
     439,   440,   441,   442,   443,   444,   451,   454,   456,   457,
     460,   461
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "DEC", "INT",
  "FLOAT", "VOID", "ID", "AO", "AF", "PO", "PF", "PV", "VIR", "RETURN",
  "EQ", "IF", "ELSE", "WHILE", "AND", "OR", "NOT", "DIFF", "EQUAL", "SUP",
  "INF", "PLUS", "MOINS", "STAR", "DIV", "DOT", "ARR", "IFX", "UNA",
  "$accept", "prog", "glob_decl_list", "fun", "fun_head", "params", "vir",
  "fun_body", "fao", "faf", "block", "decl_list", "decl", "var_decl",
  "vlist", "type", "typename", "inst_list", "pv", "inst", "ao", "af",
  "aff", "ret", "cond", "elsop", "bool_cond", "if", "else", "loop",
  "while_cond", "while", "exp", "app", "fid", "args", "arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -40,     9,    91,   -40,   -40,   -40,   -40,   -40,    -2,   -40,
       4,   -40,   -40,     6,    14,     1,    13,   -40,   -40,   -40,
     -40,    19,   -40,    16,    25,    44,   128,   -40,   -40,     1,
     -40,   -40,    39,   -40,   -40,    53,   -40,   -40,    47,    54,
     131,   -40,   -40,   -40,    52,    52,   -40,    60,   -40,    61,
      91,    55,   -40,   -40,    63,     2,    55,    55,   132,   -40,
      67,   -40,   -40,   -40,    69,   -40,   -40,    55,   131,    55,
     131,   -40,    55,   132,   -40,    64,   -40,   -40,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,   -40,
     -40,    83,    68,   102,   -40,   -40,    12,   143,    40,    40,
      40,    40,   -26,   -26,   -40,   -40,   132,    70,    85,   -40,
     -40,   -40,   131,   -40,   -40,    55,   -40,   132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     2,     1,    23,    24,    25,     3,     0,    18,
       0,    22,     4,    21,     0,    19,     0,    13,     6,    17,
      11,     0,     7,     0,     0,     0,     0,    20,     8,    10,
      14,    12,     0,    35,    28,     0,    44,    48,     0,     0,
      15,    34,    27,    17,     0,     0,    32,     0,    33,     0,
       0,     0,    57,    58,    55,     0,     0,     0,    38,    56,
       0,    16,    21,    26,     0,    30,    31,     0,     0,     0,
       0,     9,     0,    37,    39,     0,    59,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    36,
      29,     0,    42,     0,    46,    54,    64,    65,    63,    62,
      61,    60,    50,    51,    52,    53,    71,     0,    68,    43,
      45,    40,     0,    47,    66,     0,    41,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,   -40,   -40,    50,    72,   -40,   -40,   -40,
      59,   -40,    79,   -40,   -40,     0,   -40,   -40,   -37,   -39,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -35,   -40,   -40,   -40,   -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     7,    14,    23,    21,    18,    19,    31,
      25,    26,     8,     9,    15,    24,    11,    40,    41,    42,
      43,    90,    44,    45,    46,   111,    68,    47,   112,    48,
      70,    49,    75,    59,    60,   107,   108
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    63,    10,    86,    87,    52,    53,    65,    66,     3,
      54,    12,    13,    72,    74,    20,    73,    16,     4,     5,
       6,    76,    77,    17,    56,    22,    39,    27,    28,    92,
      57,    94,    91,    29,    93,    80,    81,    82,    83,    84,
      85,    86,    87,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    30,    51,    52,    53,    52,    53,
      61,    54,    62,    54,    55,    34,    72,    84,    85,    86,
      87,    67,    69,   116,   -67,    56,    95,    56,    88,    89,
     117,    57,   114,    57,    78,    79,   110,    80,    81,    82,
      83,    84,    85,    86,    87,   109,     4,     5,     6,   115,
      71,    50,    64,    78,    79,    38,    80,    81,    82,    83,
      84,    85,    86,    87,   113,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,     4,     5,     6,    32,    33,     0,    32,
      33,    34,     0,    35,    34,    36,    35,    37,    36,     0,
      37,     0,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    78,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87
};

static const yytype_int8 yycheck[] =
{
      35,    40,     2,    29,    30,     3,     4,    44,    45,     0,
       8,    13,     8,    11,    12,    14,    51,    11,     5,     6,
       7,    56,    57,     9,    22,    12,    26,     8,    12,    68,
      28,    70,    67,     8,    69,    23,    24,    25,    26,    27,
      28,    29,    30,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    10,    16,     3,     4,     3,     4,
      13,     8,     8,     8,    11,    13,    11,    27,    28,    29,
      30,    11,    11,   112,    11,    22,    12,    22,    11,    10,
     115,    28,    12,    28,    20,    21,    18,    23,    24,    25,
      26,    27,    28,    29,    30,    12,     5,     6,     7,    14,
      50,    29,    43,    20,    21,    26,    23,    24,    25,    26,
      27,    28,    29,    30,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,     5,     6,     7,     8,     9,    -1,     8,
       9,    13,    -1,    15,    13,    17,    15,    19,    17,    -1,
      19,    -1,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    37,     0,     5,     6,     7,    38,    47,    48,
      50,    51,    13,     8,    39,    49,    11,     9,    42,    43,
      14,    41,    12,    40,    50,    45,    46,     8,    12,     8,
      10,    44,     8,     9,    13,    15,    17,    19,    47,    50,
      52,    53,    54,    55,    57,    58,    59,    62,    64,    66,
      41,    16,     3,     4,     8,    11,    22,    28,    67,    68,
      69,    13,     8,    54,    45,    53,    53,    11,    61,    11,
      65,    40,    11,    67,    12,    67,    67,    67,    20,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    11,    10,
      56,    67,    54,    67,    54,    12,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    70,    71,    12,
      18,    60,    63,    12,    12,    14,    54,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    37,    38,    39,    39,    40,
      40,    41,    42,    43,    44,    45,    46,    46,    47,    48,
      49,    49,    50,    51,    51,    51,    52,    52,    53,    54,
      54,    54,    54,    54,    54,    55,    56,    57,    58,    58,
      59,    60,    60,    61,    62,    63,    64,    65,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    69,    70,    70,
      71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     0,     3,     3,     4,     4,
       2,     1,     3,     1,     1,     2,     3,     0,     1,     2,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     2,     3,
       4,     2,     0,     3,     1,     1,     3,     3,     1,     2,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     3,     4,     1,     1,     0,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: glob_decl_list  */
#line 113 "lang.y"
                                   {(yyval.offset_value) = (yyvsp[0].offset_value);}
#line 1408 "y.tab.c"
    break;

  case 3: /* glob_decl_list: glob_decl_list fun  */
#line 115 "lang.y"
                                    { }
#line 1414 "y.tab.c"
    break;

  case 4: /* glob_decl_list: glob_decl_list decl PV  */
#line 116 "lang.y"
                               {(yyval.offset_value) = (yyvsp[-1].offset_value);}
#line 1420 "y.tab.c"
    break;

  case 5: /* glob_decl_list: %empty  */
#line 117 "lang.y"
                               {(yyval.offset_value) = -1;}
#line 1426 "y.tab.c"
    break;

  case 6: /* fun: type fun_head fun_body  */
#line 121 "lang.y"
                               {}
#line 1432 "y.tab.c"
    break;

  case 7: /* fun_head: ID PO PF  */
#line 124 "lang.y"
                               {
          // Pas de déclaration de fonction à l'intérieur de fonctions !
          if (depth>0) yyerror("Function must be declared at top level~!\n");
            printf("%s pcode_%s()", type2string((yyvsp[-3].type_value)), (yyvsp[-2].string_value));
          }
#line 1442 "y.tab.c"
    break;

  case 8: /* fun_head: ID PO params PF  */
#line 130 "lang.y"
                                     {
          // Pas de déclaration de fonction à l'intérieur de fonctions !
          if (depth>0) yyerror("Function must be declared at top level~!\n");
          char * argu = (yyvsp[-1].string_value);
          printf("%s pcode_%s( %s )", type2string((yyvsp[-4].type_value)), (yyvsp[-3].string_value),argu);
         
      }
#line 1454 "y.tab.c"
    break;

  case 9: /* params: type ID vir params  */
#line 139 "lang.y"
                               {
                    (yyval.string_value) = concatenate_strings(
                      concatenate_strings(
                        concatenate_strings(type2string((yyvsp[-3].type_value)), " " ), concatenate_strings((yyvsp[-2].string_value), ",")), 
                        (yyvsp[0].string_value));
                      }
#line 1465 "y.tab.c"
    break;

  case 10: /* params: type ID  */
#line 145 "lang.y"
                               { 
                    (yyval.string_value) = concatenate_strings(concatenate_strings(type2string((yyvsp[-1].type_value)), " "), (yyvsp[0].string_value));}
#line 1472 "y.tab.c"
    break;

  case 11: /* vir: VIR  */
#line 149 "lang.y"
                               {}
#line 1478 "y.tab.c"
    break;

  case 12: /* fun_body: fao block faf  */
#line 152 "lang.y"
                               {}
#line 1484 "y.tab.c"
    break;

  case 13: /* fao: AO  */
#line 155 "lang.y"
                               { printf("{\n") ; }
#line 1490 "y.tab.c"
    break;

  case 14: /* faf: AF  */
#line 157 "lang.y"
                               {printf("}\n") ; }
#line 1496 "y.tab.c"
    break;

  case 15: /* block: decl_list inst_list  */
#line 163 "lang.y"
                               { }
#line 1502 "y.tab.c"
    break;

  case 16: /* decl_list: decl_list decl PV  */
#line 168 "lang.y"
                                {(yyval.offset_value) = (yyvsp[-2].offset_value) + (yyvsp[-1].offset_value);}
#line 1508 "y.tab.c"
    break;

  case 17: /* decl_list: %empty  */
#line 169 "lang.y"
                                { (yyval.offset_value) = 0;}
#line 1514 "y.tab.c"
    break;

  case 18: /* decl: var_decl  */
#line 172 "lang.y"
                                {(yyval.offset_value) = (yyvsp[0].offset_value);}
#line 1520 "y.tab.c"
    break;

  case 19: /* var_decl: type vlist  */
#line 175 "lang.y"
                               { (yyval.offset_value) = (yyvsp[0].offset_value); }
#line 1526 "y.tab.c"
    break;

  case 20: /* vlist: vlist vir ID  */
#line 179 "lang.y"
                    {
    // Incrémente le compteur d'offset pour la variable actuelle
    (yyval.offset_value) = (yyval.offset_value) + 1; 
    // Si la profondeur est 0, c'est une variable globale
    if (depth == 0){
        // Met à jour la table des symboles pour la variable globale
        set_symbol_value((yyvsp[0].string_value), makeSymbol((yyvsp[-3].type_value), (yyval.offset_value), 0));
        // Génère du code PCode pour initialiser la variable
        if ((yyvsp[-3].type_value) == INT) {
            printf("LOADI(0)\n");
        } else if ((yyvsp[-3].type_value) == FLOAT) {
            printf("LOADF(0.0)\n");
        }
    } else {
        // Sinon, c'est une variable locale
        // Met à jour la table des symboles pour la variable locale
        set_symbol_value((yyvsp[0].string_value), makeSymbol((yyvsp[-3].type_value), (yyval.offset_value), depth));
        // Génère du code PCode pour initialiser la variable
        if ((yyvsp[-3].type_value) == INT) {
            printf("LOADI(0)\n");
        } else if ((yyvsp[-3].type_value) == FLOAT) {
            printf("LOADF(0.0)\n");
        }
    }
}
#line 1556 "y.tab.c"
    break;

  case 21: /* vlist: ID  */
#line 204 "lang.y"
     {
    // Si la profondeur est différente de zéro, met à jour l'offset
    (yyval.offset_value) = (yyvsp[(-1) - (1)].int_value) + 1;

    // Met à jour la table des symboles pour la variable
    if (depth == 0) {
        // Met à jour la table des symboles pour la variable globale
        set_symbol_value((yyvsp[0].string_value), makeSymbol((yyvsp[-1].type_value), (yyval.offset_value), depth));

        // Génère du code PCode pour initialiser la variable
        if ((yyvsp[-1].type_value) == INT) {
            printf("LOADI(0)\n");
        } else if ((yyvsp[-1].type_value) == FLOAT) {
            printf("LOADF(0.0)\n");
        }
    } else {
        // Sinon, c'est une variable locale
        // Met à jour la table des symboles pour la variable locale
        set_symbol_value((yyvsp[0].string_value), makeSymbol((yyvsp[-1].type_value), (yyval.offset_value), depth));

        // Génère du code PCode pour initialiser la variable
        if ((yyvsp[-1].type_value) == INT) {
            printf("LOADI(0)\n");
        } else if ((yyvsp[-1].type_value) == FLOAT) {
            printf("LOADF(0.0)\n");
        }
    }
}
#line 1589 "y.tab.c"
    break;

  case 22: /* type: typename  */
#line 236 "lang.y"
                               {}
#line 1595 "y.tab.c"
    break;

  case 23: /* typename: INT  */
#line 240 "lang.y"
                               {(yyval.type_value)=INT;}
#line 1601 "y.tab.c"
    break;

  case 24: /* typename: FLOAT  */
#line 241 "lang.y"
                               {(yyval.type_value)=FLOAT;}
#line 1607 "y.tab.c"
    break;

  case 25: /* typename: VOID  */
#line 242 "lang.y"
                               {(yyval.type_value)=VOID;}
#line 1613 "y.tab.c"
    break;

  case 26: /* inst_list: inst_list inst  */
#line 247 "lang.y"
                            {}
#line 1619 "y.tab.c"
    break;

  case 27: /* inst_list: inst  */
#line 248 "lang.y"
                            {}
#line 1625 "y.tab.c"
    break;

  case 28: /* pv: PV  */
#line 251 "lang.y"
                              {}
#line 1631 "y.tab.c"
    break;

  case 29: /* inst: ao block af  */
#line 255 "lang.y"
                              {}
#line 1637 "y.tab.c"
    break;

  case 30: /* inst: aff pv  */
#line 256 "lang.y"
                              {}
#line 1643 "y.tab.c"
    break;

  case 31: /* inst: ret pv  */
#line 257 "lang.y"
                              {}
#line 1649 "y.tab.c"
    break;

  case 32: /* inst: cond  */
#line 258 "lang.y"
                              {}
#line 1655 "y.tab.c"
    break;

  case 33: /* inst: loop  */
#line 259 "lang.y"
                              {}
#line 1661 "y.tab.c"
    break;

  case 34: /* inst: pv  */
#line 260 "lang.y"
                              {}
#line 1667 "y.tab.c"
    break;

  case 35: /* ao: AO  */
#line 265 "lang.y"
                              {printf("SAVEBP\n"); depth++;}
#line 1673 "y.tab.c"
    break;

  case 36: /* af: AF  */
#line 268 "lang.y"
                              {printf("RESTOREBP\n");depth--;}
#line 1679 "y.tab.c"
    break;

  case 37: /* aff: ID EQ exp  */
#line 274 "lang.y"
                              { 
      printf("STOREP(%d)\n",get_symbol_value((yyvsp[-2].string_value))->offset );
      }
#line 1687 "y.tab.c"
    break;

  case 38: /* ret: RETURN exp  */
#line 281 "lang.y"
                              { printf("return;\n");}
#line 1693 "y.tab.c"
    break;

  case 39: /* ret: RETURN PO PF  */
#line 282 "lang.y"
                              {printf("return();\n");}
#line 1699 "y.tab.c"
    break;

  case 40: /* cond: if bool_cond inst elsop  */
#line 291 "lang.y"
                               {}
#line 1705 "y.tab.c"
    break;

  case 41: /* elsop: else inst  */
#line 294 "lang.y"
                               {printf("End_%d\n", (yyvsp[(-2) - (2)].label_value));}
#line 1711 "y.tab.c"
    break;

  case 42: /* elsop: %empty  */
#line 295 "lang.y"
                               {}
#line 1717 "y.tab.c"
    break;

  case 43: /* bool_cond: PO exp PF  */
#line 298 "lang.y"
                              {  
                              printf("GTF\n");
                              printf("IFN(False_%d)\n", (yyvsp[-3].label_value));
                              }
#line 1726 "y.tab.c"
    break;

  case 44: /* if: IF  */
#line 304 "lang.y"
                              {(yyval.label_value) = make_label();}
#line 1732 "y.tab.c"
    break;

  case 45: /* else: ELSE  */
#line 308 "lang.y"
                              {
                              printf("GOTO(End_%d)\n", (yyvsp[(-2) - (1)].label_value));
                              printf("False_%d:\n", (yyvsp[(-2) - (1)].label_value)); 
                              }
#line 1741 "y.tab.c"
    break;

  case 46: /* loop: while while_cond inst  */
#line 316 "lang.y"
                              {printf("GOTO(StartLoop_%d)\n", (yyvsp[-1].label_value));
                              printf("EndLoop_%d:\n", (yyvsp[-1].label_value));}
#line 1748 "y.tab.c"
    break;

  case 47: /* while_cond: PO exp PF  */
#line 320 "lang.y"
                              {
                              printf("GTI\n");
                              printf("IFN(EndLoop_%d)\n", (yyvsp[-1].label_value));
                                }
#line 1757 "y.tab.c"
    break;

  case 48: /* while: WHILE  */
#line 325 "lang.y"
                              {
                              (yyval.label_value) = make_label2();
                             }
#line 1765 "y.tab.c"
    break;

  case 49: /* exp: MOINS exp  */
#line 335 "lang.y"
                              {}
#line 1771 "y.tab.c"
    break;

  case 50: /* exp: exp PLUS exp  */
#line 337 "lang.y"
                         {
                              if((yyvsp[-2].type_value)==INT && (yyvsp[0].type_value) == INT){ 
                                (yyval.type_value)=INT;
                                  };
                              if(((yyvsp[-2].type_value) == INT && (yyvsp[0].type_value) == FLOAT)  || ((yyvsp[-2].type_value) == FLOAT && (yyvsp[0].type_value) == INT)){
                                if(cmp==1) {
                                  printf("I2F\n");
                                  cmp++;
                                }

                                else{
                                   printf("I2F%d\n",cmp);
                                   cmp++;
                                }
                                
                                (yyval.type_value)=FLOAT;
                              };
                             if((yyvsp[-2].type_value)==FLOAT && (yyvsp[0].type_value) == FLOAT){   
                                (yyval.type_value)=FLOAT;
                                  };

                             if((yyval.type_value) == INT) {printf("ADDI\n");};
                              if ( (yyval.type_value) == FLOAT ) {printf("ADDF\n");
                              }
                              }
#line 1801 "y.tab.c"
    break;

  case 51: /* exp: exp MOINS exp  */
#line 363 "lang.y"
                              {
                              if ((yyvsp[-2].type_value) == INT) {
                                  if ((yyvsp[0].type_value) == INT) {
                                      (yyval.type_value) = INT;
                                  }
                                  else if ((yyvsp[0].type_value) == FLOAT) {
                                      printf("I2F2\n");
                                  }
                              }
                              else if ((yyvsp[-2].type_value) == FLOAT) {
                                  if ((yyvsp[0].type_value) == INT) {
                                      printf("I2F\n");
                                  }
                                  else if ((yyvsp[0].type_value) == FLOAT) {
                                      (yyval.type_value) = FLOAT;
                                  }
                              }
                              if ((yyval.type_value) == INT) { printf("SUBI\n");}
                              else if ((yyval.type_value) == FLOAT) { printf("SUBF\n");}
                              
                              }
#line 1827 "y.tab.c"
    break;

  case 52: /* exp: exp STAR exp  */
#line 385 "lang.y"
                              {
                              if((yyvsp[-2].type_value)==INT && (yyvsp[0].type_value) == INT){
                                
                                (yyval.type_value)=INT;
                                  };
                                if( ((yyvsp[-2].type_value) == INT && (yyvsp[0].type_value) == FLOAT) || ((yyvsp[-2].type_value) == FLOAT && (yyvsp[0].type_value) == INT)){
                                  if(cmp==1) {
                                  printf("I2F\n");
                                  cmp++;
                                }

                                else{
                                   printf("I2F%d\n",cmp);
                                   cmp++;
                                }
                                
                                (yyval.type_value)=FLOAT;
                              };
                               
                               if((yyvsp[-2].type_value)==FLOAT && (yyvsp[0].type_value) == FLOAT){
                                
                                (yyval.type_value)=FLOAT;
                                };
                              if((yyval.type_value) == INT) {printf("MULTI\n");};
                              if ( (yyval.type_value) == FLOAT ) {printf("MULTF\n");}
                             }
#line 1858 "y.tab.c"
    break;

  case 53: /* exp: exp DIV exp  */
#line 412 "lang.y"
                             {printf("DIVI\n");}
#line 1864 "y.tab.c"
    break;

  case 54: /* exp: PO exp PF  */
#line 413 "lang.y"
                              {}
#line 1870 "y.tab.c"
    break;

  case 55: /* exp: ID  */
#line 416 "lang.y"
                  {
		  attribute attribue = get_symbol_value((yyvsp[0].string_value));
		  if (attribue != NULL) {
		    if (attribue->type == INT) {
		      printf("LOADP(%d) // Loading %s value\n", attribue->offset,(yyvsp[0].string_value));
		      (yyval.type_value) = INT;
		    } else if (attribue->type == FLOAT) {
		      printf("LOADP(%d) // Loading %s value\n", attribue->offset, (yyvsp[0].string_value));
		      (yyval.type_value) = FLOAT;
		    }
		  } else {
		    yyerror("Variable not declared");
		  }
		 }
#line 1889 "y.tab.c"
    break;

  case 56: /* exp: app  */
#line 431 "lang.y"
                              {}
#line 1895 "y.tab.c"
    break;

  case 57: /* exp: NUM  */
#line 432 "lang.y"
                              {(yyval.type_value) = INT ; printf("LOADI(%d)\n", (yyvsp[0].int_value) );}
#line 1901 "y.tab.c"
    break;

  case 58: /* exp: DEC  */
#line 433 "lang.y"
                              {(yyval.type_value) = FLOAT; printf("LOADF(%f)\n", (yyvsp[0].float_value) );}
#line 1907 "y.tab.c"
    break;

  case 59: /* exp: NOT exp  */
#line 438 "lang.y"
                              {}
#line 1913 "y.tab.c"
    break;

  case 60: /* exp: exp INF exp  */
#line 439 "lang.y"
                              {}
#line 1919 "y.tab.c"
    break;

  case 61: /* exp: exp SUP exp  */
#line 440 "lang.y"
                              {}
#line 1925 "y.tab.c"
    break;

  case 62: /* exp: exp EQUAL exp  */
#line 441 "lang.y"
                              {}
#line 1931 "y.tab.c"
    break;

  case 63: /* exp: exp DIFF exp  */
#line 442 "lang.y"
                              {}
#line 1937 "y.tab.c"
    break;

  case 64: /* exp: exp AND exp  */
#line 443 "lang.y"
                              {}
#line 1943 "y.tab.c"
    break;

  case 65: /* exp: exp OR exp  */
#line 444 "lang.y"
                              {}
#line 1949 "y.tab.c"
    break;

  case 66: /* app: fid PO args PF  */
#line 451 "lang.y"
                              {}
#line 1955 "y.tab.c"
    break;

  case 67: /* fid: ID  */
#line 454 "lang.y"
                              {}
#line 1961 "y.tab.c"
    break;

  case 68: /* args: arglist  */
#line 456 "lang.y"
                              {}
#line 1967 "y.tab.c"
    break;

  case 69: /* args: %empty  */
#line 457 "lang.y"
                              {}
#line 1973 "y.tab.c"
    break;

  case 70: /* arglist: arglist VIR exp  */
#line 460 "lang.y"
                              {}
#line 1979 "y.tab.c"
    break;

  case 71: /* arglist: exp  */
#line 461 "lang.y"
                              {}
#line 1985 "y.tab.c"
    break;


#line 1989 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 466 "lang.y"
 
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

