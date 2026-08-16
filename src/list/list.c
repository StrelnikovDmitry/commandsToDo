#include <stdio.h>
#include <stdlib.h>
#include "list_properties.h"

int* create_list(int basic_size) {
    size = basic_size;
    return malloc(basic_size*element_byte_size);
}

int* expand_list(int* pointer) {
    size *= 2;
    return realloc(pointer, size*element_byte_size);
}

int* shrink_list(int* pointer) {
    size /= 2;
    return realloc(pointer, size*element_byte_size);
}

void add_element(int* pointer, int value) {
    while(pointer[cursor] != 0) {
        cursor++;
    }
    if (cursor == size) {
        pointer = expand_list(pointer);
    }

    pointer[cursor] = value;
    cursor++;
}

void delete_element(int* pointer, int index) {
    if (index >= size) {
        printf("\033[31m ERROR: delete index out of bounds \033[0m\n");
    }
    else {
        pointer[index] = 0;
    }
}

void print_list(int* pointer) {
    for (int i = 0; i < size; i++) {
        printf("%d, ", pointer[i]);
    }
}
