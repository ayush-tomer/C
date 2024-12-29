#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned int positive = UINT_MAX;
    int normal = INT_MAX;
    printf("Maximum value of unsigned int is: %u\n", positive);
    printf("Maximum value of normal int is: %d\n", normal);
    positive++;
    normal++;
    printf("Minimum value of unsigned int is: %u\n", positive);
    printf("Minimum value of normal int is: %d", normal);
    return 0;
}