#include <stdio.h>
int main()
{
    int num;
    printf("Welcome to the world of squares!\n");
    while(1)
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        if(num == 0)
        {
            printf("Goodbye!");
            break;
        }
        printf("The square of %d is %d.\n", num, num * num);
    }
    return 0;
}