#include <stdio.h>
#define SIZE 3
void print_diagonal_sum(int [][SIZE]);
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Welcome to the sum of diagonals in 2-D arrays!\n");
    print_diagonal_sum(arr);
    return 0;
}
void print_diagonal_sum(int arr[][SIZE])
{
    int left_diagonal_sum = 0;
    int right_diagonal_sum = 0;
    for(int i = 0; i < SIZE; i++)
    {
        left_diagonal_sum += arr[i][i];
        right_diagonal_sum += arr[i][SIZE - 1 - i];
    }
    printf("The sum of left diagonal is: %d\n", left_diagonal_sum);
    printf("The sum of right diagonal is: %d\n", right_diagonal_sum);
    int total_diagonal_sum = left_diagonal_sum + right_diagonal_sum;
    if(SIZE % 2 == 1)
    {
        int index = SIZE / 2;
        total_diagonal_sum -= arr[index][index];
    }
    printf("The sum of total diagonal is: %d", total_diagonal_sum);
}