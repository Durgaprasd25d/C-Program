#include <stdio.h>

void copyString(char[], char[], int);

int main() {
    char stng1[20], stng2[20];

    printf("\n\n Recursion: Copy One string to another:\n");
    printf("---------------------------------------\n");

    // Input the string to copy
    printf(" Input the string to copy: ");
    scanf("%s", stng1);

    // Call the function to copy the string
    copyString(stng1, stng2, 0);

    // Print the results
    printf("\n The string successfully copied.\n\n");
    printf(" The first string is: %s\n", stng1);
    printf(" The copied string is: %s\n\n", stng2);

    return 0;
}

void copyString(char stng1[], char stng2[], int ctr) {
    // Base case: If we reach the null terminator, copy it and return
    if (stng1[ctr] == '\0') {
        stng2[ctr] = '\0';
        return;
    }
    // Copy character from source to destination
    stng2[ctr] = stng1[ctr];
    // Recursive call for the next character
    copyString(stng1, stng2, ctr + 1);
}
