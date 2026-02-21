#include <stdio.h>
#include <cs50.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int remainder(int a, int b);

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    printf("Addition: %d\n", add(a,b));
    printf("Subtraction: %d\n", subtract(a,b));
    printf("Multiplication: %d\n", multiply(a,b));

    if (b != 0)
        printf("Remainder: %d\n", remainder(a,b));
    else
        printf("Remainder: Undefined (division by zero)\n");
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int remainder(int a, int b) { return a % b; }
