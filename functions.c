#include "functions.h"
#include <math.h>

double average(int arr[]) {
    double sum = 0.0;
    for (int i = 0; i < LENGTH; i++) {
        sum += arr[i];
    }
    return sum / LENGTH;
}

void quadraticFormula(double a, double b, double c, double *x1, double *x2) {
    double discriminant = b * b - 4 * a * c;
    *x1 = (-b + sqrt(discriminant)) / (2 * a);
    *x2 = (-b - sqrt(discriminant)) / (2 * a);
}
