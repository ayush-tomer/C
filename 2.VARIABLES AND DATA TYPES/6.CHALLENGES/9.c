#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    int radius;
    printf("Please enter the radius of the circle in cm: ");
    scanf("%d", &radius);
    printf("The area of the circle is %lf square cm.", PI * radius * radius);
    return 0;
}