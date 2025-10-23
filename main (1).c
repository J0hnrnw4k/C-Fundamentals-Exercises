#include <stdio.h>

// Function to swap values
void SwapValues(int* userVal1, int* userVal2, int* userVal3, int* userVal4) {
    int temp;

    // Swap first and second values
    temp = *userVal1;
    *userVal1 = *userVal2;
    *userVal2 = temp;

    // Swap third and fourth values
    temp = *userVal3;
    *userVal3 = *userVal4;
    *userVal4 = temp;
}

int main() {
    int val1, val2, val3, val4;

    // Read four integers from input
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &val1, &val2, &val3, &val4);

    // Call SwapValues function to swap the values
    SwapValues(&val1, &val2, &val3, &val4);

    // Print the swapped values separated with spaces
    printf("%d %d %d %d\n", val1, val2, val3, val4);

    return 0;
}
