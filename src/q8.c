// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include <stdio.h>
#define MAX_TITLE_SIZE 100
#define MAX_AUTHOR_SIZE 50
struct Book {
    char title[MAX_TITLE_SIZE];
    char author[MAX_AUTHOR_SIZE];
    float price;
};
int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    // Consume the newline character left by scanf
    while (getchar() != '\n');
    
    struct Book books[n];
    
    // Allow the user to enter details of n books
    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, MAX_TITLE_SIZE, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';
        
        printf("Author: ");
        fgets(books[i].author, MAX_AUTHOR_SIZE, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        
        printf("Price: ");
        scanf("%f", &books[i].price);
        // Consume the newline character left by scanf
        while (getchar() != '\n');
    }
    
    float priceThreshold;
    printf("Enter a price threshold: ");
    scanf("%f", &priceThreshold);
    
    // Display all books whose price is above the user-defined value
    printf("\nBooks with price above %.2f:\n", priceThreshold);
    for (int i = 0; i < n; i++) {
        if (books[i].price > priceThreshold) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n\n", books[i].price);
        }
    }
    
    return 0; // Exit with success code
}