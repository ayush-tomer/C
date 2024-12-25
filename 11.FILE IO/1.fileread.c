#include <stdio.h>
int main()
{
    FILE *file_pointer;
    char text[100];
    file_pointer = fopen("fileread.txt", "r");
    if(file_pointer == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }
    char c;
    do
    {
        c = fgetc(file_pointer);
        printf("%c", c);
    }
    while(c != EOF);
    int result = fclose(file_pointer);
    if(result == 0)
    {
        file_pointer = NULL;
    }
    else
    {
        printf("File was not closed properly.");
        return 1;
    }
    return 0;
}