#include <stdio.h>
int main()
{
    int i = 3;
    int *j = &i;
    int **k = &j;
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of i = %u\n", *k);
    printf("Address of j = %u\n", &j);
    printf("Address of j = %u\n", k);
    printf("Address of k = %u\n", &k);
    printf("Value of k = %u\n", k);
    printf("Value of k = %u\n", *(&k));
    printf("Value of j = %u\n", j);
    printf("Value of j = %u\n", *(&j));
    printf("Value of j = %u\n", *k);
    printf("Value of j = %u\n", **(&k));
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **(&j));
    printf("Value of i = %d\n", **k);
    printf("Value of i = %d\n", ***(&k));
    return 0;
}