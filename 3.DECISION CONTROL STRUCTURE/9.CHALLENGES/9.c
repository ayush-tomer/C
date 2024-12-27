#include <stdio.h>
int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d is the absolute value of %d.", number >= 0 ? number : -number, number);
    return 0;
}