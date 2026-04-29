// Write a C program that copies the contents of one file to another file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;

    source = fopen("13.txt", "r");

    if (source == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    target = fopen("target.txt", "w");

    if (target == NULL) {
        printf("Unable to create target file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}