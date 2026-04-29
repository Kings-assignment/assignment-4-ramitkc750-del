// Write a C program to read the contents of a text file and display them on the screen.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("12.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Contents of file:\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}