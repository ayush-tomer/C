#include <stdio.h>
int main()
{
    int b, h;
    printf("Welcome to the area of a triangle calculator!\n");
    printf("Please enter the base of the triangle: ");
    scanf("%d", &b);
    printf("Now, enter the height of the triangle: ");
    scanf("%d", &h);
    float area = 0.5 * b * h;
    printf("The area of your triangle is: %f", area);
    return 0;
}