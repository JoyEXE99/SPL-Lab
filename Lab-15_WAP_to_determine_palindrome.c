#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Input an integer number
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Reverse the integer
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Check if original integer and reversed integer are equal
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}