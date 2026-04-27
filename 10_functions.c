#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
void greet(char name[]);
int factorial(int n);

int main() {
    printf("=== Function Examples ===\n\n");
    
    // Calling function with return value
    int result = add(15, 25);
    printf("Addition of 15 and 25: %d\n", result);
    
    // Calling function with no return value
    greet("Alice");
    
    // Calling recursive function
    int fact = factorial(5);
    printf("Factorial of 5: %d\n", fact);
    
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {
    printf("Hello, %s! Welcome to C programming.\n", name);
}

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
