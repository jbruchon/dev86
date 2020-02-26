/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -aptTc -N is_ctok -H hash1 token1.tok  */
/* Computed positions: -k'1-2' */

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


#define TOTAL_KEYWORDS 23
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 62
/* maximum key range = 61, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash1 (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63,  6, 63, 63, 63, 28,  8, 63,
      63, 63, 23,  3, 63, 25, 20, 18, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      10,  5,  0, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 13, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 30, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
      63, 63, 63, 63, 63, 63
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct token_trans *
is_ctok (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct token_trans wordlist[] =
    {
      {""}, {""},
#line 14 "token1.tok"
      {">>",	TK_RIGHT_OP},
#line 4 "token1.tok"
      {">>=",	TK_RIGHT_ASSIGN},
      {""}, {""}, {""},
#line 22 "token1.tok"
      {">=",	TK_GE_OP},
#line 16 "token1.tok"
      {"++",	TK_INC_OP},
      {""},
#line 6 "token1.tok"
      {"+=",	TK_ADD_ASSIGN},
      {""},
#line 23 "token1.tok"
      {"==",	TK_EQ_OP},
#line 24 "token1.tok"
      {"!=",	TK_NE_OP},
      {""},
#line 11 "token1.tok"
      {"&=",	TK_AND_ASSIGN},
      {""},
#line 21 "token1.tok"
      {"<=",	TK_LE_OP},
#line 19 "token1.tok"
      {"&&",	TK_AND_OP},
      {""},
#line 12 "token1.tok"
      {"^=",	TK_XOR_ASSIGN},
      {""},
#line 15 "token1.tok"
      {"<<",	TK_LEFT_OP},
#line 5 "token1.tok"
      {"<<=",	TK_LEFT_ASSIGN},
      {""},
#line 9 "token1.tok"
      {"/=",	TK_DIV_ASSIGN},
      {""},
#line 18 "token1.tok"
      {"->",	TK_PTR_OP},
      {""}, {""},
#line 8 "token1.tok"
      {"*=",	TK_MUL_ASSIGN},
      {""},
#line 7 "token1.tok"
      {"-=",	TK_SUB_ASSIGN},
      {""}, {""},
#line 10 "token1.tok"
      {"%=",	TK_MOD_ASSIGN},
      {""},
#line 13 "token1.tok"
      {"|=",	TK_OR_ASSIGN},
      {""}, {""}, {""}, {""},
#line 25 "token1.tok"
      {"..",	TK_WORD},
#line 3 "token1.tok"
      {"...",	TK_ELLIPSIS},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "token1.tok"
      {"--",	TK_DEC_OP},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 20 "token1.tok"
      {"||",	TK_OR_OP}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash1 (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
