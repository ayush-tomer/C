#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr = (int*)calloc(2, sizeof(int));
    if(arr == NULL)
    {
        printf("Not enough memory.\n");
        return 1;
    }
    printf("Address of arr: %p\n", arr);
    arr[0] = 45;
    arr[1] = 74;
    arr = (int*)realloc(arr, 3 * sizeof(int));
    if(arr == NULL)
    {
        printf("Not enough memory.\n");
        return 1;
    }
    printf("Address of arr: %p\n", arr);
    arr[2] = 98;
    printf("Elements of arr: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    free(arr);
    arr = NULL;
    return 0;
}