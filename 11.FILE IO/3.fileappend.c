#include <stdio.h>
int main()
{
    FILE *file_pointer;
    file_pointer = fopen("filewrite.txt", "a");
    if(file_pointer == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }
    fprintf(file_pointer, "This is my first write operation.\n");
    fprintf(file_pointer, "Square of %d is %d.", 3, 3*3);
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