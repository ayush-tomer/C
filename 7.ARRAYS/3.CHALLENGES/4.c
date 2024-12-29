#include <stdio.h>
int is_sorted(int [], int);
int main()
{
    int arr1[] = {5, 8, 9, 9, 10, 15};
    int arr2[] = {76, 70, 50, 12, 12, 0};
    int arr3[] = {87, 0, 67, -98, 5, 5};
    printf("Welcome to the array sorting checker!\n");
    if(is_sorted(arr1, 6))
    {
        printf("Array is sorted.\n");
    }
    else
    {
        printf("Array is not sorted.\n");
    }
    if(is_sorted(arr2, 6))
    {
        printf("Array is sorted.\n");
    }
    else
    {
        printf("Array is not sorted.\n");
    }
    if(is_sorted(arr3, 6))
    {
        printf("Array is sorted.\n");
    }
    else
    {
        printf("Array is not sorted.\n");
    }
    return 0;
}
int is_sorted(int arr[], int size)
{
    int increasing = 1, decreasing = 1;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > arr[i - 1])
        {
            decreasing = 0;
        }
        else if(arr[i] < arr[i - 1])
        {
            increasing = 0;
        }
    }
    return increasing || decreasing;
}