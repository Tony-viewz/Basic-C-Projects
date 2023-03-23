#include <stdio.h>
#include <stdlib.h>
/**
main - a project that runs a basic calculator
Return: always 0
*/
int main()
{
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);

    return 0;
}