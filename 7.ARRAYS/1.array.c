#include <stdio.h>
void print_marks(int [], int);
int main()
{
    int marks[5];
    int number_of_students = 5;
    for(int i = 0; i < number_of_students; i++)
    {
        printf("Please enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    print_marks(marks, number_of_students);
    return 0;
}
void print_marks(int marks[], int number_of_students)
{
    for(int i = 0; i < number_of_students; i++)
    {
        printf("The marks of student %d is %d.\n", i + 1, marks[i]);
    }
}