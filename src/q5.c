// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int i = 0;

    str = (char *)malloc(200 * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    char *ptr = str;

    while (*ptr != '\0') {
        i++;
        ptr++;
    }

    printf("Length of string: %d\n", i);

    free(str);

    return 0;
}