#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;
    printf("The value of num is: %d\n", num);
    *ptr = 87;
    printf("The value of num is: %d", num);
    return 0;
}