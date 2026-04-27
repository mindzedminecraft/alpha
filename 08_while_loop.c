#include <stdio.h>

int main() {
    int i = 1;
    
    // While loop
    printf("While loop - Numbers from 1 to 5:\n");
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    
    // While loop - calculate sum
    int sum = 0;
    i = 1;
    printf("Sum using while loop:\n");
    while(i <= 100) {
        sum += i;
        i++;
    }
    printf("Sum of 1 to 100: %d\n", sum);
    
    // Do-while loop (executes at least once)
    printf("\nDo-while loop example:\n");
    int num = 0;
    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        if(num != 0) {
            printf("You entered: %d\n", num);
        }
    } while(num != 0);
    
    printf("\nExited the loop!\n");
    
    return 0;
}
