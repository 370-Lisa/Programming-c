#include <stdio.h>
#include <math.h>

int main() {
    // Variables for principal amount, rate of interest, time, number of compounds
    double principal, rate, time, compoundInterest;
    int n; // Number of times interest is compounded per year
    double amount;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    // Convert rate from percentage to a fraction
    rate = rate / 100;

    // Calculate compound interest using the formula: A = P(1 + r/n)^(n*t)
    amount = principal * pow((1 + rate / n), n * time);

    // Compound interest is the final amount minus the principal
    compoundInterest = amount - principal;

    // Output the results
    printf("The final amount after compound interest: %.2lf\n", amount);
    printf("The compound interest earned: %.2lf\n", compoundInterest);

    return 0;
}
