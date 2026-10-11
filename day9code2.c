//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using if–else
    if (num % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }

    return 0;
}
