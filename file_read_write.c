#include <stdio.h>

int main(int argc, char **argv) {

    FILE *in, *out; // File pointers for input and output files
    int c;          // Variable to store characters read from the file

    // Open input file "i.txt" in read mode
    in = fopen("i.txt", "r");
    if (!in) {
        fprintf(stderr, "Error opening i.txt for reading.\n");
        return 1;
    }

    // Open output file "o.txt" in write mode
    out = fopen("o.txt", "w");
    if (!out) {
        fprintf(stderr, "Error opening o.txt for writing.\n");
        fclose(in);
        return 1;
    }

    // Read characters from input file and write them to the output file
    while ((c = fgetc(in)) != EOF) {
        fputc(c, out);
    }

    // Close both files
    fclose(out);
    fclose(in);

    printf("File contents have been successfully copied from i.txt to o.txt.\n");
    return 0;
}
