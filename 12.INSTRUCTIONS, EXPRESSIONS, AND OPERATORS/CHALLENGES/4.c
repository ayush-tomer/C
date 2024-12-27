#include <stdio.h>
int main()
{
    int a, b, c, d, perimeter;
    printf("Please enter the first side of the quadrilateral: ");
    scanf("%d", &a);
    printf("Now, enter the second side of the quadrilateral: ");
    scanf("%d", &b);
    printf("Now, enter the third side of the quadrilateral: ");
    scanf("%d", &c);
    printf("Now, enter the fourth side of the quadrilateral: ");
    scanf("%d", &d);
    perimeter = a + b + c + d;
    printf("The perimeter of your quadrilateral is: %d", perimeter);
    return 0;
}