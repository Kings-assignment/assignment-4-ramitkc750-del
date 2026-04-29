// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>
#include<string.h>
#define MAX_MODEL_SIZE 50
struct Car {
    char model[MAX_MODEL_SIZE];
    int year;
    float mileage;
};
int main() {
    struct Car cars[3];
    int minIndex = 0;

    // Store information for 3 cars
    for (int i = 0; i < 3; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model: ");
        fgets(cars[i].model, MAX_MODEL_SIZE, stdin);
        cars[i].model[strcspn(cars[i].model, "\n")] = '\0';

        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Mileage: ");
        scanf("%f", &cars[i].mileage);
        // Consume the newline character left by scanf
        while (getchar() != '\n');
    }

    // Find the car with the lowest mileage
    for (int i = 1; i < 3; i++) {
        if (cars[i].mileage < cars[minIndex].mileage) {
            minIndex = i;
        }
    }

    // Display the details of the car with the lowest mileage
    printf("\nCar with the lowest mileage:\n");
    printf("Model: %s\n", cars[minIndex].model);
    printf("Year: %d\n", cars[minIndex].year);
    printf("Mileage: %.2f\n", cars[minIndex].mileage);

    return 0;
}
