#include <stdio.h>
void swap(int, int);
int main()
{
    int x = 4;
    int y = 7;
    printf("x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("x = %d, y = %d", x, y);
    return 0;
}
void swap(int first, int second)
{
    printf("first = %d, second = %d\n", first, second);
    int temp = first;
    first = second;
    second = temp;
    printf("first = %d, second = %d\n", first, second);
}