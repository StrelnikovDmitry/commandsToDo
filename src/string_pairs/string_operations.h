#ifndef STRING_OPERATIONS
#define STRING_OPERATIONS

struct String create_string();
void assign(char *str, char *value);
unsigned char is_blank(struct String str);
void print(struct String str);

#endif
