#include <stdio.h>

int main() {
    char name[] = "Durga";
    int age = 25;
    char address[] = "Bhubaneswar, Odisha, India";
    char email[] = "durga@example.com";
    long long int phoneNumber = 8895555987;

    // Display the bio-data
    printf("\nYour Bio-data \n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Email: %s\n", email);
    printf("Phone Number: %lld\n", phoneNumber);

    return 0;
}
