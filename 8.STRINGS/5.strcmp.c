#include <stdio.h>
#include <string.h>
int main()
{
    int result = strcmp("apple", "banana");
    printf("Comparing 'apple' and 'banana': %d\n", result);
    result = strcmp("cherry", "banana");
    printf("Comparing 'cherry' and 'banana': %d\n", result);
    result = strcmp("banana", "banana");
    printf("Comparing 'banana' and 'banana': %d\n", result);
    return 0;
}