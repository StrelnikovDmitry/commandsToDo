#include "../list_functions.h"

int main() {
    int* list = create_list(2);
    list[1] = 12;

    add_element(list, 1);
    add_element(list, 2);
    add_element(list, 3);

    print_list(list);

    return 0;
}
