#include <stdio.h>
int main()
{
    int first, second, min;
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);
    min = first < second ? first : second;
    printf("The minimum of the two numbers is: %d", min);
    return 0;
}