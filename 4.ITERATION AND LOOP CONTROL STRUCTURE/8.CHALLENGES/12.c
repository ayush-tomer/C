#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Welcome to the number adder!\n");
    do
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        sum += num;
    }
    while(num != 0);
    printf("The sum of all the numbers you entered is %d.", sum);
    return 0;
}