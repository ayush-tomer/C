#include <stdio.h>
void copy_arr(char*, int, char*);
void print_arr(char [], int);
int main()
{
    char arr[] = "KG Coding";
    char new_arr[9];
    printf("Welcome to the array copying using pointer arithmetic!\n");
    printf("Original array: ");
    print_arr(arr, 9);
    copy_arr(arr, 9, new_arr);
    printf("Copied array: ");
    print_arr(new_arr, 9);
    return 0;
}
void print_arr(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
void copy_arr(char *arr, int size, char *new_arr)
{
    for(int i = 0; i < size; i++)
    {
        *(new_arr + i) = *(arr + i);
    }
}