//
// Created by treyvon on 2/1/24.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "object.h"
#include "vm.h"

ObjFunction *compile(const char *source);

#ifdef __cplusplus
}
#endif

#endif //CLOX_COMPILER_H
