#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("\nArray elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i]; // Calculate sum
    }

    // Output sum
    printf("\nSum of array elements = %d\n", sum);

    return 0;
}