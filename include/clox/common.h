//
// Created by treyvon on 1/31/24.
//

#ifndef CLOX_COMMON_H
#define CLOX_COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef PRINT
    #define DEBUG_PRINT_CODE
#endif

#ifdef TRACE
    #define DEBUG_TRACE_EXECUTION
#endif

#ifdef DEBUG
    #define DEBUG_PRINT_CODE
    #define DEBUG_TRACE_EXECUTION
#endif

#endif //CLOX_COMMON_H
