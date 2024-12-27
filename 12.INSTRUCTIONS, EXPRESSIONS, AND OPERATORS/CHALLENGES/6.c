#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest;
    printf("Welcome to the simple interest calculator!\n");
    printf("Please enter the principal amount: ");
    scanf("%f", &principal);
    printf("Now, enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Finally, enter the time period: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("The simple interest is: %.2f", simple_interest);
    return 0;
}