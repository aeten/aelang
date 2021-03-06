
#ifndef _AETEN_LANG_ARRAYLIST_H
#define _AETEN_LANG_ARRAYLIST_H

#include <stddef.h>

#define AETEN_LANG_IMPLEMENTATION_H \
	aeten_lang__implementation(ArrayList, List)

#define AETEN_LANG_PRIVATE \
	aeten_lang__private(size_t capacity, size_t size, size_t element_size, void *elements)

#define AETEN_LANG_CONSTRUCTORS \
	aeten_lang__constructor(size_t /*element_size*/, size_t /*initial_capacity*/)

#include "aeten/lang/List.h"
#include "aeten/lang/implementation.h"

#endif
