#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount;
    int time, n;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Input annual interest rate
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    // Input number of times interest is compounded per year
    printf("Enter the number of times that interest is compounded per year: ");
    scanf("%d", &n);

    // Input time in years
    printf("Enter the number of years the money is invested or borrowed: ");
    scanf("%d", &time);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    amount = principal * pow((1 + rate / n), n * time);

    // Output the result
    printf("The amount after %d years is: %.2f\n", time, amount);
    printf("The compound interest earned is: %.2f\n", amount - principal);

    return 0;
}
