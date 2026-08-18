#include "../string_operations.h"
#include "../string.h"

int main() {
    struct String string = create_string();
    print(string);
    char value[4] = {'a', 'b', 'c', '\0'};
    assign(string.str, value);
    print(string);


    return 0;
}
