#include <stdio.h>

int main() {
    int i;
    
    // Simple for loop
    printf("Numbers from 1 to 5:\n");
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Print multiplication table
    printf("Multiplication table of 5:\n");
    for(i = 1; i <= 10; i++) {
        printf("5 * %d = %d\n", i, 5 * i);
    }
    
    // Nested loops - print a pattern
    printf("\nSquare pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // For loop with different increments
    printf("\nEven numbers from 0 to 20:\n");
    for(i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Sum of numbers
    int sum = 0;
    for(i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum of 1 to 10: %d\n", sum);
    
    return 0;
}
