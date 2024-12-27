#include <stdio.h>
int main()
{
    int num, sum = 0, copy;
    printf("Welcome to the sum of digits calculator!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    copy = num;
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of the digits of %d is %d.", copy, sum);
    return 0;
}