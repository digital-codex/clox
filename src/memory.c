//
// Created by treyvon on 1/31/24.
//

#include <stdlib.h>

#include "memory.h"

#ifdef __cplusplus
extern "C" {
#endif

void *reallocate(void *pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }

    void *result = realloc(pointer, newSize);
    if (result == NULL)
        exit(1);

    return result;
}

#ifdef __cplusplus
}
#endif