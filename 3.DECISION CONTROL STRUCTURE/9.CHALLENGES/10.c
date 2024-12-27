#include <stdio.h>
int main()
{
    int marks;
    printf("Welcome to the Grade Calculator!\n");
    printf("Please enter your marks: ");
    scanf("%d", &marks);
    printf("Your marks are in category: ");
    marks > 80 ? printf("High") : marks > 50 ? printf("Moderate") : printf("Low");
    return 0;
}