#include <stdio.h>

// Function prototypes
int add(int a, int b);
void greet(char *name);

int main() {
    printf("Dummy C File\n");

    // Variables
    int num1 = 5;
    int num2 = 7;

    // Function call and output
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);

    // Function call to greet
    greet("John");

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Function definition to greet
void greet(char *name) {
    printf("Hello, %s!\n", name);
}
