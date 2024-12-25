#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct Student student[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &student[i].rollno);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &student[i].marks);
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Roll number of student %d: %d\t", i + 1, student[i].rollno);
        printf("Name of student %d: %s\t", i + 1, student[i].name);
        printf("Marks of student %d: %.2f\n", i + 1, student[i].marks);
    }
    return 0;
}