#ifndef nevec_lexer_h
#define nevec_lexer_h

#include "token.h"

typedef struct {
    char *curr;
    char *start;

    Loc loc;
} Lexer;

void initLexer(Lexer *lexer, char *src);
Token nextToken(Lexer *lexer);

#endif
