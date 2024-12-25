#include <stdio.h>
int main()
{
    int num1 = 0;
    while(num1 != 10)
    {
        printf("Please enter a number: ");
        scanf("%d", &num1);
    }
    printf("Congrats you have guessed the correct number.\n");
    int num2;
    do
    {
        printf("Please enter a number: ");
        scanf("%d", &num2);
    }
    while(num2 != 10);
    printf("Congrats you have guessed the correct number.");
    return 0;
}