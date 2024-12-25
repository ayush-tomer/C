#include <stdio.h>
void count_to_10();
int add(int, int);
int main()
{
    count_to_10();
    int sum = add(4, 5);
    printf("The sum is %d.\n", sum);
    int x = 9;
    int y = 54;
    int z = add(x, y);
    printf("The sum is %d.", z);
    return 0;
}
void count_to_10()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}
int add(int a, int b)
{
    return a + b;
}