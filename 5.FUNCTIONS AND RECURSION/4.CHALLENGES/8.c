#include <stdio.h>
int fibonacci(int);
int main()
{
    int terms;
    printf("Welcome to the Fibonacci series by recursion!\n");
    printf("Enter the number of terms you want to see: ");
    scanf("%d", &terms);
    printf("The Fibonacci series is: ");
    for(int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int pos)
{
    if(pos == 0)
    {
        return 0;
    }
    else if(pos == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(pos - 1) + fibonacci(pos - 2);
    }
}