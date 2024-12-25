#include <stdio.h>
#include <string.h>
int main() {
    char name1[100];
    char name2[100];
    printf("Please enter your name: ");
    fgets(name1, 100, stdin);
    strcpy(name2, name1);
    printf("%s has been copied to %s.", name1, name2);
    return 0;
}