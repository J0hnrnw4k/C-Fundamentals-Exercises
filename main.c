#include <stdio.h>
#include "functions.h"

int main() {
    int arr[LENGTH];

    printf("Enter %d integers:\n", LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        scanf("%d", &arr[i]);
    }

    double a, b, c, x1, x2;
    printf("Enter a, b, c for quadratic formula:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double avg = average(arr);
    printf("average: %.2lf\n", avg);

    quadraticFormula(a, b, c, &x1, &x2);
    printf("x1: %.2lf\n", x1);
    printf("x2: %.2lf\n", x2);

    return 0;
}
