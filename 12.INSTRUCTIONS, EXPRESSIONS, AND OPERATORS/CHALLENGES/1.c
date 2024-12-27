#include <stdio.h>
int main()
{
    int first, second;
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);
    printf("Here are the results of some basic operations:\n");
    printf("%d + %d = %d\n", first, second, first + second);
    printf("%d - %d = %d\n", first, second, first - second);
    printf("%d * %d = %d\n", first, second, first * second);
    printf("%d / %d = %d\n", first, second, first / second);
    printf("%d %% %d = %d\n", first, second, first % second);
    return 0;
}