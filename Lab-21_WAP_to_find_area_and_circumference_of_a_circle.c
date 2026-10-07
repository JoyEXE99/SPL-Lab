#include <stdio.h>

// Define symbolic constant for PI
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Input radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output results
    printf("\n--- Circle Calculations ---\n");
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}