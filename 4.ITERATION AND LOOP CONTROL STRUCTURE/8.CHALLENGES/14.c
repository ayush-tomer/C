#include <stdio.h>
int main()
{
    int num;
    printf("Welcome to the printing even numbers!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i <= num; i += 2)
    {
        if(i % 2 == 1)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}