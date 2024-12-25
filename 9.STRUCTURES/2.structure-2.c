#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct Student student1 = {1, "Ayush", 100};
    struct Student student2 = {.name = "Ram", .marks = 99.89, .rollno = 2};
    struct Student student3 = student1;
    student3.rollno = 3;
    struct Student student4 = {0};
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student1.rollno, student1.name, student1.marks);
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student2.rollno, student2.name, student2.marks);
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student3.rollno, student3.name, student3.marks);
    printf("Roll number: %d, Name: %s, Marks: %.2f", student4.rollno, student4.name, student4.marks);
    return 0;
}