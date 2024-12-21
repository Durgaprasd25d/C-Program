#include <stdlib.h>
#include <stdio.h>

long getFileSize(const char *filename)
{
    long result;
    FILE *fh = fopen("exp.txt", "rb"); // Opening the file in binary mode
    if (fh == NULL) {               // Error handling if the file doesn't open
        printf("Error: File not found or cannot be opened.\n");
        exit(1);
    }
    fseek(fh, 0, SEEK_END);         // Move file pointer to the end
    result = ftell(fh);             // Get the current file pointer position
    fclose(fh);                     // Close the file
    return result;
}

int main(void)
{
    printf("Size of the said File: %ld bytes.\n", getFileSize("input.txt"));
    return 0;
}
