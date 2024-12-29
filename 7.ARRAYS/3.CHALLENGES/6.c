#include <stdio.h>
void reverse(int [], int);
void swap(int*, int*);
void print_arr(int [], int);
int main()
{
    int arr1[] = {1, 2, 5, 7, 8, 9, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    printf("Welcome to the reversal of array!\n");
    printf("First array before reversing: ");
    print_arr(arr1, 8);
    reverse(arr1, 8);
    printf("First array after reversing: ");
    print_arr(arr1, 8);
    printf("Second array before reversing: ");
    print_arr(arr2, 5);
    reverse(arr2, 5);
    printf("Second array after reversing: ");
    print_arr(arr2, 5);
    return 0;
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
void reverse(int arr[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }
}