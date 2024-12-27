#include <stdio.h>
int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    float floatNumber = number;
    printf("Original number is: %d\n", number);
    printf("Float converted is: %f\n", floatNumber);
    printf("Float converted is: %f", (float) number);
    return 0;
}