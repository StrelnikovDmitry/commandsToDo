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

void compact(int* pointer, int start) {
    int write = start;

    for (int read = start; read < size; read++) {
        if (pointer[read]) {
            pointer[write] = pointer[read];
            if (read != write) {
                pointer[read] = 0;
            }
            write++;
        }
    }

    if (write < size/2) { shrink_list(pointer); }
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
        compact(pointer, index);
    }
}

void print_list(int* pointer) {
    for (int i = 0; i < size; i++) {
        printf("%d, ", pointer[i]);
    }
    printf("\n");
}
