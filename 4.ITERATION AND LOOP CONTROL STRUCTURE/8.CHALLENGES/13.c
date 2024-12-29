#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Welcome to the positive number adder!\n");
    do
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        if(num < 0)
        {
            printf("Negative numbers are not allowed.\n");
            continue;
        }
        sum += num;
    }
    while(num != 0);
    printf("The sum of all the positive numbers you entered is %d.", sum);
    return 0;
}