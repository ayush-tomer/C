#include <stdio.h>
void print_marks(int [2][3]);
int main()
{
    int marks[2][3];
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("Enter the marks of student %d in subject %d: ", row + 1, col + 1);
            scanf("%d", &marks[row][col]);
        }
    }
    print_marks(marks);
    return 0;
}
void print_marks(int marks[2][3])
{
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("The marks of student %d in subject %d is %d.\n", row + 1, col + 1, marks[row][col]);
        }
    }
}