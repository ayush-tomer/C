#include <stdio.h>
int main()
{
    float first, second;
    char operator;
    printf("Welcome to the calculator!\n");
    printf("Please enter the first number: ");
    scanf("%f", &first);
    printf("Now, enter the second number: ");
    scanf("%f", &second);
    printf("Finally enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    float result;
    switch(operator)
    {
        case '+':
        result = first + second;
        break;
        case '-':
        result = first - second;
        break;
        case '*':
        result = first * second;
        break;
        case '/':
        result = first / second;
        break;
        default:
        printf("Invalid operator, please enter (+, -, *, /).");
        return 1;
    }
    printf("The result is: %f", result);
    return 0;
}