#include <stdio.h>
int main()
{
    int age;
    printf("Welcome to ARTO.\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You are eligible for a driving license.\n");
    }
    printf("Your age is %d.", age);
    return 0;
}