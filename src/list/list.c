#include <stdio.h>
#include <stdlib.h>
#include "list_properties.h"

int* create_list(int basic_size) {
    size = basic_size;
    return malloc(basic_size*element_byte_size);
}

int* expand_list(int* pointer) {
    size *= 2;
    return realloc(pointer, size);
}
