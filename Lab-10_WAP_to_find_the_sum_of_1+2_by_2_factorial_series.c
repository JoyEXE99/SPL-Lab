#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double sum = 0.0;
    int limit = 7; // Series goes up to 7/7!

    for (int i = 1; i <= limit; i++) {
        sum += (double)i / factorial(i);
    }

    printf("Sum of the series (1/1! + 2/2! + ... + 7/7!) = %.6f\n", sum);

    return 0;
}