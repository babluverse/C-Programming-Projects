// Program to show different data types in C

#include <stdio.h>

int main() {
    int number = 10;
    float decimal = 3.14;
    char letter = 'A';
    double big_decimal = 99.99999;
    
    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Character: %c\n", letter);
    printf("Double: %.5lf\n", big_decimal);
    
    return 0;
}
