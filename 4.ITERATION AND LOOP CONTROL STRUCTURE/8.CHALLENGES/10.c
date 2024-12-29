#include <stdio.h>
int main()
{
    int rows;
    printf("Welcome to the pattern printing program!\n");
    printf("Please enter the number of rows you want to print: ");
    scanf("%d", &rows);
    printf("Right Half Pyramid Pattern:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Reverse Right Half Pyramid Pattern:\n");
    for(int i = rows; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Left Half Pyramid Pattern:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = rows; j > i; j--)
        {
            printf("  ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Reverse Left Half Pyramid Pattern:\n");
    for(int i = rows; i > 0; i--)
    {
        for(int j = rows; j > i; j--)
        {
            printf("  ");
        }
        for(int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}