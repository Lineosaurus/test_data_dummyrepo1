#include <iostream>
#include <string>

// Function prototype
int add(int a, int b);

int main() {
    std::cout << "Dummy C++ File" << std::endl;

    // Variables
    int num1 = 5;
    int num2 = 7;

    // Function call
    int result = add(num1, num2);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
