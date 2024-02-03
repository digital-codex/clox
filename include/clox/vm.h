//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_VM_H
#define CLOX_VM_H

#include "chunk.h"
#include "table.h"
#include "value.h"

#define STACK_MAX 256

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    Chunk *chunk;
    uint8_t *ip;
    Value stack[STACK_MAX];
    Value *stackTop;
    Table strings;
    Obj *objects;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

extern VM vm;

void initVM();
void freeVM();
/* Spinning Up the Interpreter 16.1
InterpretResult interpret(Chunk *chunk);
*/
InterpretResult interpret(const char *source);
void push(Value value);
Value pop();

#ifdef __cplusplus
}
#endif

#endif //CLOX_VM_H
