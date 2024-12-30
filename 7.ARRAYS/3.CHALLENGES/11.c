#include <stdio.h>
int addition(int [][3], int, int);
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    printf("Welcome to the sum and average of array calculator!\n");
    int sum = addition(arr, 3, 3);
    float avg = (float) sum / 9;
    printf("The sum of the numbers is %d and their average is %f.", sum, avg);
    return 0;
}
int addition(int arr[][3], int rows, int cols)
{
    int sum = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}