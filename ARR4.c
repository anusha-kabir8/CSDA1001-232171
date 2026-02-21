#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    printf("Factorial: %d\n", factorial(n));
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
