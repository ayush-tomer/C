#include <stdio.h>
int addition(int [], int);
int main()
{
    int size;
    printf("Welcome to the sum and average of array calculator!\n");
    printf("Please enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Now, enter the elements of the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = addition(arr, size);
    float avg = (float) sum / 10;
    printf("The sum of the numbers is %d and their average is %f.", sum, avg);
    return 0;
}
int addition(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}