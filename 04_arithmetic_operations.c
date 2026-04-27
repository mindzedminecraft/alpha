#include <stdio.h>

int main() {
    int a = 20, b = 10;
    int result;
    
    // Addition
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    
    // Subtraction
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    
    // Multiplication
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    
    // Division
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);
    
    // Modulus (remainder)
    result = a % b;
    printf("%d %% %d = %d\n", a, b, result);
    
    // Increment operator
    int x = 5;
    printf("\nIncrement: x = %d, x++ = %d, ++x = %d\n", x, x++, ++x);
    
    // Decrement operator
    int y = 5;
    printf("Decrement: y = %d, y-- = %d, --y = %d\n", y, y--, --y);
    
    return 0;
}
