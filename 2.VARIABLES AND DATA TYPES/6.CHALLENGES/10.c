#include <stdio.h>
int main()
{
    int first, second, temp;
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);
    printf("Before swapping, the value of first number is %d and the second number is %d.\n", first, second);
    temp = first;
    first = second;
    second = temp;
    printf("After swapping, the value of first number is %d and the second number is %d.", first, second);
    return 0;
}