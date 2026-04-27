#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNo;
    char name[50];
    float gpa;
};

int main() {
    // Creating a structure variable
    struct Student student1;
    
    // Assigning values to structure members
    student1.rollNo = 101;
    strcpy(student1.name, "John Doe");
    student1.gpa = 3.8;
    
    // Displaying structure data
    printf("=== Student Information ===\n");
    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("GPA: %.2f\n", student1.gpa);
    
    // Array of structures
    struct Student students[2];
    
    students[0].rollNo = 101;
    strcpy(students[0].name, "Alice");
    students[0].gpa = 3.9;
    
    students[1].rollNo = 102;
    strcpy(students[1].name, "Bob");
    students[1].gpa = 3.7;
    
    printf("\n=== All Students ===\n");
    for(int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Roll No: %d\n", students[i].rollNo);
        printf("  Name: %s\n", students[i].name);
        printf("  GPA: %.2f\n", students[i].gpa);
    }
    
    return 0;
}
