#include <stdio.h>

int main() {
    int x = 10;
    printf("Before: %d\n", x);

    x = 50;
    printf("After: %d\n", x);

    x = x + 5;
    printf("Updated: %d\n", x);

    return 0;
}
