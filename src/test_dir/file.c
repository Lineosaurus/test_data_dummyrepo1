#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    printf("Dummy C File\n");

    // Variables
    int num1 = 5;
    int num2 = 7;

    // Function call
    int result = add(num1, num2);

    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
