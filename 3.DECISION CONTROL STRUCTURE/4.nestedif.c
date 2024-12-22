#include <stdio.h>
int main()
{
    char is_indian;
    int age;
    printf("Welcome to ARTO.\n");
    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &is_indian);
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(is_indian == 'Y')
    {
        if(age < 18)
        {
            printf("You are too young, please apply after you are 18.\n");
        }
        else if(age > 70)
        {
            printf("You are senior, you can not apply anymore.\n");
        }
        else
        {
            printf("You are eligible for a license.\n");
        }
    }
    else
    {
        printf("Only Indian citizens can apply.\n");
    }
    printf("Your age is %d.", age);
    return 0;
}