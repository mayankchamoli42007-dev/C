// Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, simple_interest, compound_interest;
    int time;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (%%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    // Simple Interest calculation
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest calculation
    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    // Output results
    printf("\nSimple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}




