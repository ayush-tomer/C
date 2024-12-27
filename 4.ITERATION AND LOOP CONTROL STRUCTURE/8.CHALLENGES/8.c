#include <stdio.h>
int main()
{
    int num, sum = 0, copy;
    printf("Welcome to the armstrong number checker!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    copy = num;
    while(num > 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if(sum == copy)
    {
        printf("The number %d is an armstrong number.", copy);
    }
    else
    {
        printf("The number %d is not an armstrong number.", copy);
    }
    return 0;
}