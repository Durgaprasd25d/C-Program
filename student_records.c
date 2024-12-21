#include <stdio.h>

// Define a structure for storing student information
struct records {
    char first_name[50];
    char last_name[50];
    int roll_number;
    float marks;
};

int main() {
    int x, i;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &x);

    // Declare an array of students
    struct records student[x];

    // Input student information
    printf("\nEnter the students' information:\n");
    for (i = 0; i < x; i++) {
        student[i].roll_number = i + 1;

        printf("\nInformation for Roll Number: %d\n", student[i].roll_number);
        printf("Enter the first name: ");
        scanf("%s", student[i].first_name);
        printf("Enter the last name: ");
        scanf("%s", student[i].last_name);
        printf("Enter the marks: ");
        scanf("%f", &student[i].marks);
    }

    // Display student information
    printf("\n\nDisplay the students' information:\n");
    for (i = 0; i < x; i++) {
        printf("\nRoll Number: %d\n", student[i].roll_number);
        printf("First Name: %s\n", student[i].first_name);
        printf("Last Name: %s\n", student[i].last_name);
        printf("Marks: %.1f\n", student[i].marks);
    }

    return 0;
}
