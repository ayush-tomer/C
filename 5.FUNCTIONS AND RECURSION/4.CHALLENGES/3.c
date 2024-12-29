#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Welcome to the world of squares!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is %d.\n", num, square(num));
    return 0;
}
int square(int num)
{
    return num * num;
}