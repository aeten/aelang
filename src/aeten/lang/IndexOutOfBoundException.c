#define AETEN_LANG_IMPLEMENTATION_C
#include "aeten/lang/IndexOutOfBoundException.h"

#include <stdio.h>

inline void IndexOutOfBoundException__initialize(IndexOutOfBoundException *exception, char* message) {
	exception->_private.message = (char*)malloc(strlen(message)+1);
	strcpy(exception->_private.message, message);
}

inline void IndexOutOfBoundException__finalize(IndexOutOfBoundException *exception) {
	free(exception->_private.message);
}

inline char* IndexOutOfBoundException__message(IndexOutOfBoundException *exception) {
	return exception->_private.message;
}

inline void IndexOutOfBoundException__print_message(IndexOutOfBoundException *exception) {
	fprintf(stderr, "%s\n", exception->_private.message);
}
