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
    if(is_indian == 'Y' && age >= 18 && age <= 70)
    {
        printf("You are eligible for a driving license.\n");
    }
    else
    {
        printf("You are not eligible.\n");
    }
    printf("Your age is %d.", age);
    return 0;
}