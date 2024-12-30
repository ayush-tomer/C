#include <stdio.h>
int search(int [][3], int, int, int);
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    printf("Welcome to the searching in 2-D arrays!\n");
    int occ = search(arr, 3, 3, 1);
    printf("Searching for 1 found %d occurrences.\n", occ);
    occ = search(arr, 3, 3, 5);
    printf("Searching for 5 found %d occurrences.\n", occ);
    occ = search(arr, 3, 3, 9);
    printf("Searching for 9 found %d occurrences.\n", occ);
    return 0;
}
int search(int arr[][3], int rows, int cols, int element)
{
    int occ = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == element)
            {
                occ++;
            }
        }
    }
    return occ;
}