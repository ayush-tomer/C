#include <stdio.h>
int main()
{
    int num, prev, next;
    printf("Welcome to the Fibonacci series generator!\n");
    printf("Please enter the number upto which you want to generate the Fibonacci series: ");
    scanf("%d", &num);
    prev = 0;
    next = 1;
    printf("The Fibonacci series is: ");
    printf("%d ", prev);
    if(num > 0)
    {
        printf("%d ", next);
    }
    while(prev + next <= num)
    {
        int temp = prev + next;
        printf("%d ", temp);
        prev = next;
        next = temp;
    }
    return 0;
}