// Write a C program that checks if a given string is a palindrome using pointers.
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
