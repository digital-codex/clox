//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type *) reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

#ifdef __cpluscplus
extern "C" {
#endif

void *reallocate(void *pointer, size_t oldSize, size_t newSize);

#ifdef __cpluscplus
}
#endif

#endif //CLOX_MEMORY_H
