#include <stdio.h>
void delete(int [], int, int [], int*, int);
void print_arr(int [], int);
int main()
{
    int arr[] = {2, 5, 7, 7, 9, 10, 1, 0};
    int new_arr[8];
    int new_size;
    printf("Welcome to the deletion in array!\n");
    delete(arr, 8, new_arr, &new_size, 5);
    printf("The array after deleting 5 is: ");
    print_arr(new_arr, new_size);
    delete(arr, 8, new_arr, &new_size, 7);
    printf("The array after deleting 7 is: ");
    print_arr(new_arr, new_size);
    delete(arr, 8, new_arr, &new_size, 8);
    printf("The array after deleting 8 is: ");
    print_arr(new_arr, new_size);
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
void delete(int arr[], int size, int new_arr[], int *new_size, int element)
{
    int j = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != element)
        {
            new_arr[j] = arr[i];
            j++;
        }
    }
    *new_size = j;
}