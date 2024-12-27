#include <stdio.h>
int main()
{
    char name[100];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Welcome %s to KGCoding!", name);
    return 0;
}