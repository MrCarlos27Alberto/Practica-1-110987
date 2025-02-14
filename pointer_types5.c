#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_ptr = char_array;
    int *int_ptr = int_array;

    for (i = 0; i < 5; i++) { // Iterate through the char array using a pointer.
        printf("[char_ptr] points to %p, which contains the char '%c'\n",
               (void *)char_ptr, *char_ptr);
        char_ptr++;
    }

    for (i = 0; i < 5; i++) { // Iterate through the int array using a pointer.
        printf("[int_ptr] points to %p, which contains the integer %d\n",
               (void *)int_ptr, *int_ptr);
        int_ptr++;
    }

    return 0;
}
