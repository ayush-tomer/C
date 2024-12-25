#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[100];
    char last_name[100];
    printf("Please enter your first name: ");
    fgets(first_name, 100, stdin);
    printf("Please enter your last name: ");
    fgets(last_name, 100, stdin);
    strcat(first_name, last_name);
    printf("Your full name is %s.", first_name);
    return 0;
}