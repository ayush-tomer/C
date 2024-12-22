#include <stdio.h>
int main()
{
    for(int num = 1; num <= 100; num++)
    {
        if(num % 2 == 0)
        {
            continue;
        }
        
        printf("%d\n", num);
    }
    printf("Loop has ended.");
    return 0;
}