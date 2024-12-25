#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Please enter your name: ");
    fgets(name, 100, stdin);
    printf("The length of your name is: %lld", strlen(name));
    return 0;
}