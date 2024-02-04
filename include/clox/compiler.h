//
// Created by treyvon on 2/1/24.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "vm.h"

#ifdef __cplusplus
extern "C" {
#endif

ObjFunction* compile(const char* source);
void markCompilerRoots();

#ifdef __cplusplus
}
#endif

#endif //CLOX_COMPILER_H
