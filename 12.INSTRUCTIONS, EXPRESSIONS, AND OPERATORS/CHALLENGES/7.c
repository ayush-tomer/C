#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, compound_interest;
    printf("Welcome to the compound interest calculator!\n");
    printf("Please enter the principal amount: ");
    scanf("%f", &principal);
    printf("Now, enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Finally, enter the time period: ");
    scanf("%f", &time);
    compound_interest = principal * (pow((1 + rate / 100), time));
    printf("The compound interest is: %.2f", compound_interest);
    return 0;
}