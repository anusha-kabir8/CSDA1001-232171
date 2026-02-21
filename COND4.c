#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_leap(int year);

int main(void)
{
    int year = get_int("Enter year: ");

    if (is_leap(year))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
}

bool is_leap(int year)
{
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}
