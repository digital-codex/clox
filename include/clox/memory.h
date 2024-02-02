//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"
#include "object.h"

#define ALLOCATE(type, count) \
    (type *) reallocate(NULL, 0, sizeof(type) * (count))

#define FREE(type, pointer) reallocate(pointer, sizeof(type), 0)

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type *) reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

#ifdef __cpluscplus
extern "C" {
#endif

void *reallocate(void *pointer, size_t oldSize, size_t newSize);
void freeObjects();

#ifdef __cpluscplus
}
#endif

#endif //CLOX_MEMORY_H
