//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef double Value;

typedef struct {
    int count;
    int capacity;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);
void printValue(Value value);

#ifdef __cplusplus
}
#endif

#endif //CLOX_VALUE_H
