#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding maximum
    if (num1 >= num2 && num1 >= num3)
        max = num1;
    else if (num2 >= num1 && num2 >= num3)
        max = num2;
    else
        max = num3;

    // Finding minimum
    if (num1 <= num2 && num1 <= num3)
        min = num1;
    else if (num2 <= num1 && num2 <= num3)
        min = num2;
    else
        min = num3;

    printf("\nMaximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}