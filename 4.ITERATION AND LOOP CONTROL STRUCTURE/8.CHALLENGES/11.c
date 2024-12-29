#include <stdio.h>
int main()
{
    int num;
    printf("Welcome to the ziddi number checker!\n");
    do
    {
        printf("Please enter a positive number: ");
        scanf("%d", &num);
    }
    while(num <= 0);
    printf("You have successfully entered a positive number: %d", num);
    return 0;
}