#include <stdio.h>

int main() {
    // Integer
    int age = 25;
    
    // Float (decimal number)
    float height = 5.9;
    
    // Double (larger decimal number)
    double pi = 3.14159;
    
    // Character
    char initial = 'A';
    
    // String (array of characters)
    char name[] = "John";
    
    printf("Integer - Age: %d\n", age);
    printf("Float - Height: %.1f\n", height);
    printf("Double - Pi: %.5f\n", pi);
    printf("Character - Initial: %c\n", initial);
    printf("String - Name: %s\n", name);
    
    // Size of data types
    printf("\nSize of data types:\n");
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("char: %lu bytes\n", sizeof(char));
    
    return 0;
}
