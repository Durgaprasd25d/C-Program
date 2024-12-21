#include <stdio.h>
#include <string.h>

#define MAX 256

int main() {
    int lno, ctr = 0;
    FILE *fptr1, *fptr2;
    char fname[MAX];
    char str[MAX], temp[] = "temp.txt";

    printf("\n\n Delete a specific line from a file:\n");
    printf("-----------------------------------\n");

    // Input the file name
    printf("Input the file name to be opened: ");
    scanf("%s", fname);

    // Open the file in read mode
    fptr1 = fopen(fname, "r");
    if (!fptr1) {
        printf("File not found or unable to open the input file!!\n");
        return 0;
    }

    // Open a temporary file in write mode
    fptr2 = fopen(temp, "w");
    if (!fptr2) {
        printf("Unable to open a temporary file to write!!\n");
        fclose(fptr1);
        return 0;
    }

    // Input the line number to delete
    printf("Input the line you want to remove: ");
    scanf("%d", &lno);

    // Copy all contents to the temporary file except the specific line
    while (fgets(str, MAX, fptr1) != NULL) {
        ctr++;
        /* Skip the line at the given line number */
        if (ctr != lno) {
            fprintf(fptr2, "%s", str);
        }
    }

    fclose(fptr1);
    fclose(fptr2);

    // Remove the original file and rename the temporary file
    remove(fname);
    rename(temp, fname);

    // Display the updated content of the file
    fptr1 = fopen(fname, "r");
    printf("Now the content of the file %s is:\n", fname);
    while ((fgets(str, MAX, fptr1)) != NULL) {
        printf("%s", str);
    }
    fclose(fptr1);

    return 0;
}
