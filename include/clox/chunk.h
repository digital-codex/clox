//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"
#include "value.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t *code;
    int *lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
/* 14.6 Line Information
void writeChunk(Chunk *chunk, uint8_t byte);
*/
void writeChunk(Chunk *chunk, uint8_t byte, int line);
int addConstant(Chunk *chunk, Value value);

#ifdef __cplusplus
}
#endif

#endif //CLOX_CHUNK_H
