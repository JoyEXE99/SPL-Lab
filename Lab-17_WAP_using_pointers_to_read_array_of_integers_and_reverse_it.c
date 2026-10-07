#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // Pointer pointing to the first element

    // Reading array elements using pointers
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    // Displaying original array using pointers
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    // Reversing array using two pointers
    int *start = arr;
    int *end = arr + n - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    // Displaying reversed array using pointers
    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}