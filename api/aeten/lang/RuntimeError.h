#ifndef _AETEN_LANG_RUNTIME_ERROR_H
#define _AETEN_LANG_RUNTIME_ERROR_H

#define AETEN_LANG_IMPLEMENTATION_H \
	aeten_lang__implementation(RuntimeError, Throwable)

#define AETEN_LANG_PRIVATE \
	aeten_lang__private(char* message)

#define AETEN_LANG_CONSTRUCTORS \
	aeten_lang__constructor(char* /*message*/)

#include "aeten/lang/Throwable.h"
#include "aeten/lang/implementation.h"

#endif
