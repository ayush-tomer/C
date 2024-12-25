#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct Student student = {1, "Ram", 45.5};
    struct Student *stu_ptr = &student;
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student.rollno, student.name, student.marks);
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", (*stu_ptr).rollno, (*stu_ptr).name, (*stu_ptr).marks);
    printf("Roll number: %d, Name: %s, Marks: %.2f", stu_ptr->rollno, stu_ptr->name, stu_ptr->marks);
    return 0;
}