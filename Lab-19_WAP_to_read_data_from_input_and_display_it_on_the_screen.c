#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;

    // Reading input from user
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    // Displaying output on screen
    printf("\n--- Displaying Inputted Data ---\n");
    printf("Name : %s", name);
    printf("Age  : %d years\n", age);
    printf("GPA  : %.2f\n", gpa);

    return 0;
}