//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_VM_H
#define CLOX_VM_H

#include "object.h"
#include "table.h"
#include "value.h"

#define FRAME_MAX 64
#define STACK_MAX (FRAME_MAX * UINT8_COUNT)

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    ObjClosure* closure;
    uint8_t* ip;
    Value* slots;
} CallFrame;

typedef struct {
    CallFrame frames[FRAME_MAX];
    int frameCount;

    Chunk* chunk;
    uint8_t* ip;
    Value stack[STACK_MAX];
    Value* stackTop;
    Table globals;
    Table strings;
    ObjString* initString;
    ObjUpvalue* openUpvalues;

    size_t bytesAllocated;
    size_t nextGC;
    Obj* objects;
    int grayCount;
    int grayCapacity;
    Obj** grayStack;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

extern VM vm;

void initVM();
void freeVM();
InterpretResult interpret(const char* source);
void push(Value value);
Value pop();

#ifdef __cplusplus
}
#endif

#endif //CLOX_VM_H
