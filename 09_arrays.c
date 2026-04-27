#include <stdio.h>
#include <string.h>

int main() {
    // 1D Array
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("1D Array Elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    // Array of characters (String)
    char name[20] = "Hello";
    printf("String: %s\n", name);
    printf("Length: %lu\n\n", strlen(name));
    
    // 2D Array (Matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("2D Array (Matrix):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Find maximum in array
    printf("\nArray operations:\n");
    int max = numbers[0];
    for(int i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum value: %d\n", max);
    
    // Calculate sum of array
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of array: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / 5);
    
    return 0;
}
