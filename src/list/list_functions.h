#ifndef LIST_FUNCTIONS
#define LIST_FUNCTIONS

struct String* create_list(int basic_size);
struct String* expand_list(struct String* pointer);
struct String* shrink_list(struct String* pointer);
void print_list(struct String* pointer);
void add_element(struct String* pointer, struct String value);
void delete_element(struct String* pointer, int index);

#endif
