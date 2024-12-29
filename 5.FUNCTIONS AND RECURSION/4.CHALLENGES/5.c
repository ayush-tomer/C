#include <stdio.h>
float max(float, float);
int main()
{
    float a, b;
    printf("Welcome to the finding the maximum of two numbers!\n");
    printf("Please enter the first number: ");
    scanf("%f", &a);
    printf("Now, enter the second number: ");
    scanf("%f", &b);
    printf("The maximum of the two numbers is: %.2f", max(a, b));
    return 0;
}
float max(float first, float second)
{
    return first > second ? first : second;
}