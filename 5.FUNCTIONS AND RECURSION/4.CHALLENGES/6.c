#include <stdio.h>
void increment(int);
int main()
{
    int num;
    printf("Welcome to the call by value!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Before incrementing, the number is %d.\n", num);
    increment(num);
    printf("After incrementing, the number is %d.", num);
    return 0;
}
void increment(int num)
{
    printf("Inside function, before incrementing, the number is %d.\n", num);
    num++;
    printf("Inside function, after incrementing, the number is %d.\n", num);
}