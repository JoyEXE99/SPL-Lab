#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int X, Y;

    printf("Enter value for X: ");
    scanf("%d", &X);
    printf("Enter value for Y: ");
    scanf("%d", &Y);

    printf("\nBefore Swapping: X = %d, Y = %d\n", X, Y);

    swap(&X, &Y);

    printf("After Swapping: X = %d, Y = %d\n", X, Y);

    return 0;
}