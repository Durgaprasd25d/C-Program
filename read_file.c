#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fptr;
    char fname[20];
    char str;

    printf("\n\n Read an existing file:\n");
    printf("---------------------------\n");

    printf("Input the filename to be opened: ");
    scanf("%s", fname);

    // Open the file in read mode
    fptr = fopen(fname, "r");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("File does not exist or cannot be opened.\n");
        exit(0);
    }

    // Display the content of the file
    printf("\nThe content of the file %s is:\n", fname);
    str = fgetc(fptr); // Read the first character

    // Read and display characters until the end of the file
    while (str != EOF) {
        printf("%c", str);
        str = fgetc(fptr); // Read the next character
    }

    // Close the file after reading
    fclose(fptr);

    printf("\n\n");
}
