// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void reverseArray(char *arr, int size) {
    char temp;
    for (int i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}
int main() {
    char arr[MAX_SIZE];
    printf("Enter a string (max %d characters): ", MAX_SIZE - 1);
    fgets(arr, MAX_SIZE, stdin);
    // Remove newline character if present
    arr[strcspn(arr, "\n")] = '\0';
    int size = strlen(arr);
    reverseArray(arr, size);
    printf("Reversed string: %s\n", arr);
    return 0;
}