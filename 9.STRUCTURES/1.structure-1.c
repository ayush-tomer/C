#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct Student student1;
    printf("Enter the roll number: ");
    scanf("%d", &student1.rollno);
    printf("Enter the name: ");
    scanf("%s", student1.name);
    printf("Enter the marks: ");
    scanf("%f", &student1.marks);
    printf("Here are the details of the student:\n");
    printf("Roll number: %d, Name: %s, Marks: %.2f", student1.rollno, student1.name, student1.marks);
    return 0;
}