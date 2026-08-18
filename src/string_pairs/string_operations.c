#include <stdio.h>
#include "string.h"

struct String create_string() {
    struct String str;
    str.str[0] = '\0';
    return str;
}

void assign(char *str, char *value) {
    int i = 0;
    while (value[i] != '\0') {
        if (i == 127) {
            printf("\033[33mWRNING: value is bigger than the string cn store. \nEvery char after 127 will be erased. \033[0m\n");
            break;
        }
        else {
            str[i] = value[i];
            i++;
        }
    }
    str[i] = '\0';
}

unsigned char is_blank(struct String str) {
    return ~str.str[1];
}

void print(struct String str) {
    printf("%s\n", str.str);
}
