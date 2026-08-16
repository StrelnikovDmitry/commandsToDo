#ifndef LIST_FUNCTIONS
#define LIST_FUNCTIONS

int* create_list(int basic_size);
int* expand_list(int* pointer);
int* shrink_list(int* pointer);
void print_list(int* pointer);
void add_element(int* pointer, int value);
void delete_element(int* pointer, int index);

#endif
