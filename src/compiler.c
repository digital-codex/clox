//
// Created by treyvon on 2/1/24.
//
#include <stdio.h>

#include "common.h"
#include "compiler.h"
#include "scanner.h"

#ifdef __cplusplus
extern "C" {
#endif

void compile(const char *source) {
    initScanner(source);
    int line = -1;
    for (;;) {
        Token token = scanToken();
        if (token.line != line) {
            printf("%4d ", token.line);
            line = token.line;
        } else {
            printf("\t| ");
        }
        printf("%2d '%.*s'\n", token.type, token.length, token.start);

        if (token.type == TOKEN_EOF) break;
    }
}

#ifdef __cplusplus
}
#endif
