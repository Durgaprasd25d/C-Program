#include <stdio.h>

// Defining a structure for employee details
struct employee {
    char *empname; // Employee name (string pointer)
    int empid;     // Employee ID (integer)
};

// Main function
int main() {
    // Displaying the purpose of the program
    printf("\n\nPointer: Show a pointer to an array whose contents are pointers to structure:\n");
    printf("--------------------------------------------\n");

    // Initializing employee structures with values
    static struct employee emp1 = {"John", 1001};
    static struct employee emp2 = {"Alex", 1002};
    static struct employee emp3 = {"Taylor", 1003};

    // Creating an array of pointers to struct employee
    struct employee *arr[] = {&emp1, &emp2, &emp3};

    // Creating a pointer to an array of pointers to struct employee
    struct employee *(*pt)[3] = &arr; // pt stores the address of the array of pointers

    // Printing employee name using pointer to an array of pointers to structure
    printf("Employee Name: %s\n", (*pt)[1]->empname); // Accessing emp2's name

    // Explanation for the printed employee name
    printf("\nExplanation:\n");
    printf("(*pt)[1]->empname => This accesses the name of emp2 (Alex)\n");

    // Printing employee ID using pointer to an array of pointers to structure
    printf("Employee ID: %d\n", (*pt)[1]->empid); // Accessing emp2's ID

    // Explanation for the printed employee ID
    printf("\nExplanation:\n");
    printf("(*pt)[1]->empid => This accesses the empid of emp2 (1002)\n");

    return 0;
}
