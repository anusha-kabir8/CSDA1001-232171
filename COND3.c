#include <stdio.h>
#include <cs50.h>

int max3(int a, int b, int c);

int main(void)
{
    int a = get_int("Enter first: ");
    int b = get_int("Enter second: ");
    int c = get_int("Enter third: ");

    printf("Maximum: %d\n", max3(a,b,c));
}

int max3(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
