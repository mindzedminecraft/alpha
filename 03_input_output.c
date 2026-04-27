#include <stdio.h>

int main() {
    int number;
    float salary;
    char name[50];
    
    // Taking input from user
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &number);
    
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    // Displaying output
    printf("\n--- Your Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", number);
    printf("Salary: $%.2f\n", salary);
    
    return 0;
}
