#include <stdio.h>
int main()
{
    float f;
    printf("Welcome to the temperature converter!\n");
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    float c = (f - 32) * 5 / 9;
    printf("The temperature in Celsius is: %f", c);
    return 0;
}