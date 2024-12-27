#include <stdio.h>
int main()
{
    int age;
    printf("Welcome to the age group calculator!\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age < 13)
    {
        printf("You are a child.");
    }
    else if(age < 20)
    {
        printf("You are a teenager.");
    }
    else if(age < 60)
    {
        printf("You are an adult.");
    }
    else
    {
        printf("You are a senior citizen.");
    }
    return 0;
}