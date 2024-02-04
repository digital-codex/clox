//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_COMMON_H
#define CLOX_COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#if defined(PRINT) || defined(DEBUG)
    #define DEBUG_PRINT_CODE
#endif

#if defined(TRACE) || defined(DEBUG)
    #define DEBUG_TRACE_EXECUTION
#endif

#if defined(STRESS_GC) || defined(DEBUG_GC) || defined(DEBUG)
    #define DEBUG_STRESS_GC
#endif

#if defined(LOG_GC) || defined(DEBUG_GC) || defined(DEBUG)
    #define DEBUG_LOG_GC
#endif

#define UINT8_COUNT (UINT8_MAX + 1)

#endif //CLOX_COMMON_H
