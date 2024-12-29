#include <stdio.h>
int main()
{
    int size, min, max;
    printf("Welcome to the min-max finder!\n");
    printf("Please enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Now, enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The value of min is %d and max is %d.", min, max);
    return 0;
}