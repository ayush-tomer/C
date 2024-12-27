#include <stdio.h>
int main()
{
    int num, reverse = 0, copy;
    printf("Welcome to the reversal of a number!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    copy = num;
    while(copy != 0)
    {
        reverse *= 10;
        reverse += copy % 10;
        copy /= 10;
    }
    printf("The reverse of %d is %d.", num, reverse);
    return 0;
}