/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -aptTc -k1,3 -N is_ckey -H hash2 token2.tok  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


#define TOTAL_KEYWORDS 34
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 44
/* maximum key range = 42, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash2 (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      25, 45, 45, 45, 45, 45, 10, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45,  5, 45, 30, 10, 10,
      25, 20,  0, 10, 45,  5, 45, 45, 25, 45,
      10, 10,  5, 45,  0,  5,  0,  0,  0, 20,
      45, 45, 25, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct token_trans *
is_ckey (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct token_trans wordlist[] =
    {
      {""}, {""}, {""},
#line 16 "token2.tok"
      {"for",		TK_FOR},
      {""}, {""},
#line 22 "token2.tok"
      {"return",		TK_RETURN},
#line 18 "token2.tok"
      {"if",		TK_IF},
#line 19 "token2.tok"
      {"int",		TK_INT},
#line 32 "token2.tok"
      {"void",		TK_VOID},
#line 30 "token2.tok"
      {"union",		TK_UNION},
#line 27 "token2.tok"
      {"struct",		TK_STRUCT},
#line 29 "token2.tok"
      {"typedef",	TK_TYPEDEF},
#line 31 "token2.tok"
      {"unsigned",	TK_UNSIGNED},
#line 17 "token2.tok"
      {"goto",		TK_GOTO},
#line 15 "token2.tok"
      {"float",		TK_FLOAT},
#line 28 "token2.tok"
      {"switch",		TK_SWITCH},
      {""},
#line 21 "token2.tok"
      {"register",	TK_REGISTER},
#line 5 "token2.tok"
      {"case",		TK_CASE},
#line 23 "token2.tok"
      {"short",		TK_SHORT},
#line 24 "token2.tok"
      {"signed",		TK_SIGNED},
      {""},
#line 36 "token2.tok"
      {"__LINE__",	TK_LINE},
#line 13 "token2.tok"
      {"enum",		TK_ENUM},
#line 7 "token2.tok"
      {"const",		TK_CONST},
#line 14 "token2.tok"
      {"extern",		TK_EXTERN},
#line 10 "token2.tok"
      {"do",		TK_DO},
#line 8 "token2.tok"
      {"continue",	TK_CONTINUE},
#line 12 "token2.tok"
      {"else",		TK_ELSE},
#line 34 "token2.tok"
      {"while",		TK_WHILE},
#line 11 "token2.tok"
      {"double",		TK_DOUBLE},
#line 9 "token2.tok"
      {"default",	TK_DEFAULT},
#line 33 "token2.tok"
      {"volatile",	TK_VOLATILE},
#line 3 "token2.tok"
      {"auto",		TK_AUTO},
#line 4 "token2.tok"
      {"break",		TK_BREAK},
#line 25 "token2.tok"
      {"sizeof",		TK_SIZEOF},
      {""},
#line 35 "token2.tok"
      {"__FILE__",	TK_FILE},
#line 20 "token2.tok"
      {"long",		TK_LONG},
      {""},
#line 26 "token2.tok"
      {"static",		TK_STATIC},
      {""}, {""},
#line 6 "token2.tok"
      {"char",		TK_CHAR}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash2 (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
