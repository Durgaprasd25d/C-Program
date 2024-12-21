#include <stdio.h>

#define MAX 100

char* ReverseOfString(char[]);

int main() {
    char str1[MAX], *revstr;

    printf("\n\n Recursion: Get reverse of a string :\n");
    printf("-------------------------------------\n");

    // Input any string
    printf(" Input any string: ");
    scanf("%s", str1);

    // Call the function ReverseOfString
    revstr = ReverseOfString(str1);

    // Print the reversed string
    printf(" The reversed string is: %s\n\n", revstr);

    return 0;
}

char* ReverseOfString(char str1[]) {
    static int i = 0;         // Static variable to keep track of position
    static char revstr[MAX];  // Static array to hold the reversed string

    if (*str1) {  // Check if the string is not empty
        ReverseOfString(str1 + 1);  // Recursive call with the next character
        revstr[i++] = *str1;        // Add the character to the reversed string
    }

    return revstr;  // Return the reversed string
}
