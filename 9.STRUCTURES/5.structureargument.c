#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
void print_student(struct Student student);
void print_student_from_pointer(struct Student *student);
int main()
{
    struct Student student = {1, "Ram", 45.5};
    struct Student *stu_ptr = &student;
    print_student(student);
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student.rollno, student.name, student.marks);
    print_student_from_pointer(stu_ptr);
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student.rollno, student.name, student.marks);
    return 0;
}
void print_student(struct Student student)
{
    student.rollno = 2;
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student.rollno, student.name, student.marks);
}
void print_student_from_pointer(struct Student *student)
{
    student->rollno = 3;
    printf("Roll number: %d, Name: %s, Marks: %.2f\n", student->rollno, student->name, student->marks);
}