#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int roll_number;
    float gpa;
};

int main() {
    // Create structure variable
    struct Student student1;
    
    // Input data
    printf("Enter student name: ");
    scanf("%s", student1.name);
    
    printf("Enter roll number: ");
    scanf("%d", &student1.roll_number);
    
    printf("Enter GPA: ");
    scanf("%f", &student1.gpa);
    
    // Display data
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_number);
    printf("GPA: %.2f\n", student1.gpa);
    
    // Array of structures
    struct Student students[2];
    
    printf("\n--- Enter data for 2 students ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }
    
    printf("\n--- Students Information ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d: %s (Roll: %d, GPA: %.2f)\n", 
               i + 1, students[i].name, students[i].roll_number, students[i].gpa);
    }
    
    return 0;
}
