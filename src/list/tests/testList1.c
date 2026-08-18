#include "../list_functions.h"

int main() {
    int* list = create_list(2);
    list[0] = 0;
    list[1] = 1;
    print_list(list);

    return 0;
}
