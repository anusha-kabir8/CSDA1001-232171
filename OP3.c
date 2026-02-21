#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_even(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    if (is_even(n))
        printf("Even\n");
    else
        printf("Odd\n");
}

bool is_even(int n)
{
    return n % 2 == 0;
}
