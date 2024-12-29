#include <stdio.h>
int reverse(int, int);
int main()
{
    int num, rev;
    printf("Welcome to the palindrome checker!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    rev = reverse(num, 0);
    if(num == rev)
    {
        printf("The number %d is a palindrome.", num);
    }
    else
    {
        printf("The number %d is not a palindrome.", num);
    }
    return 0;
}
int reverse(int num, int rev)
{
    if(num == 0)
    {
        return rev;
    }
    rev *= 10;
    rev += num % 10;
    num /= 10;
    return reverse(num, rev);
}