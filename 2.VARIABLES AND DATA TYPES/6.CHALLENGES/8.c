#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    int radius;
    printf("Please enter the radius of the circle in cm: ");
    scanf("%d", &radius);
    printf("The circumference of the circle is %lf cm.", 2 * PI * radius);
    return 0;
}