#include <stdio.h>
int add(int, int, int, int);
int main()
{
    int a, b, c, d;
    printf("Welcome to the adding 4 numbers!\n");
    printf("Please enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The sum of the four numbers is %d.\n", add(a, b, c, d));
    printf("%d\n", add(1, 2, 3, 4));
    printf("%d\n", add(11, 22, 33, 44));
    printf("%d", add(4, 87, 2, 9));
    return 0;
}
int add(int a, int b, int c, int d)
{
    int sum = a + b + c + d;
    return sum;
}