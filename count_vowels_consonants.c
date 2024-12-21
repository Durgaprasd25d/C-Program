#include <stdio.h>
#include <string.h>

#define STR_SIZE 100 // Define the maximum size of the string

int main() {
    char str[STR_SIZE]; // Declare a character array to store the string
    int i, len, vowel = 0, cons = 0; // Initialize variables for iteration, vowel count, and consonant count

    // Display information about the program
    printf("\n\nCount total number of vowels or consonants in a string:\n");
    printf("--------------------------------------------------------\n");

    // Prompt the user to input a string
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); // Read the string from standard input

    len = strlen(str); // Get the length of the input string

    // Loop through each character in the string
    for (i = 0; i < len; i++) {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++; // Increment the vowel count
        }
        // Check if the character is an alphabet but not a vowel (consonant)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cons++; // Increment the consonant count
        }
    }

    // Display the results
    printf("\nThe total number of vowels in the string is: %d\n", vowel);
    printf("The total number of consonants in the string is: %d\n\n", cons);

    return 0; // Indicate successful program execution
}
