#include <stdio.h>
int main()
{
    float first, second;
    printf("Please enter the first number: ");
    scanf("%f", &first);
    printf("Now, enter the second number: ");
    scanf("%f", &second);
    float result = first * second;
    printf("The result of the multiplication of %f and %f is %f.", first, second, result);
    return 0;
}