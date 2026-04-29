// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("11.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File written successfully.\n");

    return 0;
}