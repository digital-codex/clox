//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include "chunk.h"

#ifdef __cplusplus
extern "C" {
#endif

void disassembleChunk(Chunk* chunk, const char *name);
int disassembleInstruction(Chunk* chunk, int offset);

#ifdef __cplusplus
}
#endif

#endif //CLOX_DEBUG_H
