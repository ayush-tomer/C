#include <stdio.h>
long long factorial_using_loop(int);
long long factorial_using_recursion(int);
int main()
{
    long long res1 = factorial_using_loop(20);
    printf("Factorial using loop: %lld\n", res1);
    long long res2 = factorial_using_recursion(20);
    printf("Factorial using recursion: %lld", res2);
    return 0;
}
long long factorial_using_loop(int num)
{
    long long result = 1;
    for(int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
long long factorial_using_recursion(int num)
{
    if(num == 0)
    {
        return 1;
    }
    return num * factorial_using_recursion(num - 1);
}