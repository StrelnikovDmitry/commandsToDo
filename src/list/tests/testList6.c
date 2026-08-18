#include "../list_functions.h"
#include "../../string_pairs/string.h"
#include "../../string_pairs/string_operations.h"

int main() {
    struct String string0 = create_string();
    assign(string0.str, "papa-");
    struct String string1 = create_string();
    assign(string1.str, "paparazzi");

    struct String* list = create_list(2);
    add_element(list, string0);
    add_element(list, string1);

    print_list(list);

    return 0;
}
