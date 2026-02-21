#include <stdio.h>
#include <cs50.h>

int sign(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    int result = sign(n);

    if (result == 1)
        printf("Positive\n");
    else if (result == -1)
        printf("Negative\n");
    else
        printf("Zero\n");
}

int sign(int n)
{
    if (n > 0) return 1;
    if (n < 0) return -1;
    return 0;
}

