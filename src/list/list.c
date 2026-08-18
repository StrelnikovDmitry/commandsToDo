#include <stdio.h>
#include <stdlib.h>
#include "list_properties.h"
#include "../string_pairs/string.h"
#include "../string_pairs/string_operations.h"

struct String* create_list(int basic_size) {
    size = basic_size;
    return malloc(basic_size*element_byte_size);
}

struct String* expand_list(struct String* pointer) {
    size *= 2;
    return realloc(pointer, size*element_byte_size);
}

struct String* shrink_list(struct String* pointer) {
    size /= 2;
    return realloc(pointer, size*element_byte_size);
}

void compact(struct String* pointer, int start) {
    int write = start;

    for (int read = start; read < size; read++) {
        if (!is_blank(pointer[read])) {
            pointer[write] = pointer[read];
            if (read != write) {
                pointer[read] = create_string();
            }
            write++;
        }
    }
    cursor = write + 1;
    if (write < size/2) { shrink_list(pointer); }
}

void add_element(struct String* pointer, struct String value) {
    while(!is_blank(pointer[cursor])) {
        cursor++;
    }
    if (cursor == size) {
        pointer = expand_list(pointer);
    }

    pointer[cursor] = value;
    cursor++;
}

void delete_element(struct String* pointer, int index) {
    if (index >= size) {
        printf("\033[31m ERROR: delete index out of bounds \033[0m\n");
    }
    else {
        pointer[index] = create_string();
        compact(pointer, index);
    }
}

void print_list(struct String* pointer) {
    for (int i = 0; i < size; i++) {
        print(pointer[i]);
    }
    printf("\n");
}
