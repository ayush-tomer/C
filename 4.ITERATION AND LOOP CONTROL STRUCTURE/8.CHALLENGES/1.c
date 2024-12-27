#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Welcome to the odd numbers sum calculator!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i += 2)
    {
        sum += i;
    }
    printf("The sum of all odd numbers from 1 to %d is %d.", num, sum);
    return 0;
}