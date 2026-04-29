 // Write a C program that swaps the values of two integers using pointers using function.
#include <stdio.h>
// Function to swap the values
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Call the swap function
    swap(&a, &b);
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
} 