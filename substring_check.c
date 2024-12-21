#include <stdio.h>
#include <string.h>

int main() {
    char str[80], search[20]; // Declare arrays for the main string and substring
    int i, j, str_len, sub_len, found = 0; // Declare variables for iterations and flag for substring check

    printf("\n\nCheck whether a given substring is present in the given string:\n");
    printf("---------------------------------------------------------------\n");

    // Input the main string
    printf("Input the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    // Input the substring to be searched
    printf("Input the substring to be searched: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0'; // Remove trailing newline

    // Calculate lengths of the main string and substring
    str_len = strlen(str);
    sub_len = strlen(search);

    // Check for the substring in the main string
    for (i = 0; i <= str_len - sub_len; i++) {
        found = 1; // Assume substring is found
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != search[j]) {
                found = 0; // Substring does not match
                break;
            }
        }
        if (found) {
            break; // Break if substring is found
        }
    }

    // Print the result
    if (found) {
        printf("\nThe substring \"%s\" is found in the string.\n", search);
    } else {
        printf("\nThe substring \"%s\" is NOT found in the string.\n", search);
    }

    return 0; // Indicate successful execution
}
