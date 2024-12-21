#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fptr1, *fptr2;
    char ch, fname1[20], fname2[20];

    printf("\n\n Copy a file to another name:\n");
    printf("----------------------------\n");

    // Input the source file name
    printf("Input the source file name: ");
    scanf("%s", fname1);

    // Open the source file in read mode
    fptr1 = fopen(fname1, "r");
    if (fptr1 == NULL) {
        printf("File not found or error in opening!!\n");
        exit(1); // Exit the program if file cannot be opened
    }

    // Input the destination file name
    printf("Input the new file name: ");
    scanf("%s", fname2);

    // Open the destination file in write mode
    fptr2 = fopen(fname2, "w");
    if (fptr2 == NULL) {
        printf("Error in creating the destination file!!\n");
        fclose(fptr1); // Close the source file before exiting
        exit(2); // Exit the program if the destination file cannot be created
    }

    // Copy contents from source to destination
    while (1) {
        ch = fgetc(fptr1); // Read a character from the source file
        if (ch == EOF) {
            break; // Break the loop when EOF (end of file) is reached
        } else {
            fputc(ch, fptr2); // Write the character to the destination file
        }
    }

    // Display success message
    printf("The file %s copied successfully to %s.\n\n", fname1, fname2);

    // Close both files
    fclose(fptr1);
    fclose(fptr2);

    getchar(); // To catch any extra newline character
}
