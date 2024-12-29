#include <stdio.h>
int main()
{
    char character;
    char *ptr = &character;
    printf("Welcome to the showcasing of character pointers!\n");
    printf("Please enter a character: ");
    scanf("%c", ptr);
    printf("The value of the character is: %c\n", *ptr);
    printf("The value of the character is: %c", character);
    return 0;
}