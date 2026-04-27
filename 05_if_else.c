#include <stdio.h>

int main() {
    int marks = 85;
    char grade;
    
    // If-else if-else statement
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);
    
    // Nested if
    int age = 20;
    printf("\n");
    if (age >= 18) {
        if (age >= 21) {
            printf("You can vote and drink.\n");
        } else {
            printf("You can vote but not drink.\n");
        }
    } else {
        printf("You cannot vote or drink.\n");
    }
    
    // Ternary operator
    int num = 15;
    printf("\n%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    
    return 0;
}
