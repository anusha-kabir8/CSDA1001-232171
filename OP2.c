#include <stdio.h>
#include <cs50.h>

float fahrenheit(float c);

int main(void)
{
    float c = get_float("Enter Celsius: ");
    printf("Fahrenheit: %.2f\n", fahrenheit(c));
}

float fahrenheit(float c)
{
    return (c * 9/5) + 32;
}
