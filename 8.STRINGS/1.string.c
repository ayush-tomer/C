#include <stdio.h>
int main()
{
    char c1[] = "Hello, World!";
    char c2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", c1);
    printf("%s\n", c2);
    char name[100];
    printf("Please enter your name: ");
    fgets(name, 100, stdin);
    printf("Good morning, ");
    puts(name);
    return 0;
}