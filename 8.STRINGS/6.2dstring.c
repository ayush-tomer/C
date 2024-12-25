#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][100] = {"Ayush", "Prashant", "Ram", "Sonu", "Sameeer"};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < strlen(names[i]); j++)
        {
            printf("%c\n", names[i][j]);
        }
        printf("\n");
    }
    return 0;
}