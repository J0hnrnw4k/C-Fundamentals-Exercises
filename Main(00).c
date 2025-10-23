#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    // Take the size for the dynamically allocated array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Create myData as an integer pointer type variable
    int *myData;

    // Dynamically allocate memory for an integer array using the input size
    myData = (int *)malloc(size * sizeof(int));
    if (myData == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Using the myData pointer and a loop, initialize the array member values to the index number
    for (int i = 0; i < size; i++) {
        *(myData + i) = i;
    }

    // Loop through the filled array using the myData pointer and print out the array contents separated by space
    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(myData + i));
    }
    printf("\n");

    // Calculate the average of the array's data members
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += *(myData + i);
    }
    double average = sum / size;

    // Print the average with exactly 2 decimal places
    printf("average: %.2lf\n", average);

    // Free the array when you are done
    free(myData);

    return 0;
}
