#include <stdio.h>
int main()
{
    int num, reverse = 0, copy;
    printf("Welcome to the palindrome checker!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    copy = num;
    while(copy != 0)
    {
        reverse *= 10;
        reverse += copy % 10;
        copy /= 10;
    }
    if(num == reverse)
    {
        printf("The number %d is a palindrome.", num);
    }
    else
    {
        printf("The number %d is not a palindrome.", num);
    }
    return 0;
}