#include <stdio.h>
int main()
{
    int num;
    int *ptr = &num;
    printf("Welcome to the showcasing of integer pointers!\n");
    printf("Please enter an integer: ");
    scanf("%d", ptr);
    printf("The value of the integer is: %d\n", *ptr);
    printf("The value of the integer is: %d", num);
    return 0;
}