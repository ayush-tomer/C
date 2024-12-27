#include <stdio.h>
int main()
{
    int side;
    printf("Please enter the side of the square in cm: ");
    scanf("%d", &side);
    printf("The area of your square is %d square cm.", side * side);
    return 0;
}