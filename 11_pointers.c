#include <stdio.h>

int main() {
    int age = 25;
    float salary = 50000.50;
    
    // Declare pointers
    int *ptr_age = &age;           // Pointer to int
    float *ptr_salary = &salary;   // Pointer to float
    
    printf("=== Pointers Introduction ===\n\n");
    
    // Address of operator (&)
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", (void*)&age);
    printf("\nValue of salary: %.2f\n", salary);
    printf("Address of salary: %p\n\n", (void*)&salary);
    
    // Dereference operator (*)
    printf("=== Dereferencing Pointers ===\n");
    printf("ptr_age points to: %d\n", *ptr_age);
    printf("ptr_salary points to: %.2f\n\n", *ptr_salary);
    
    // Pointer address
    printf("Address stored in ptr_age: %p\n", (void*)ptr_age);
    printf("Address of ptr_age itself: %p\n\n", (void*)&ptr_age);
    
    // Modifying value through pointer
    *ptr_age = 30;
    printf("After modifying through pointer:\n");
    printf("age = %d\n", age);
    
    // Array and pointers
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to first element
    
    printf("\n=== Arrays and Pointers ===\n");
    printf("Array elements using pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d (using *(ptr+%d) = %d)\n", i, arr[i], i, *(ptr + i));
    }
    
    return 0;
}
