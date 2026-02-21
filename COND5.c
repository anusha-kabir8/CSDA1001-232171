#include <stdio.h>
#include <cs50.h>

int ticket_price(int age, int student);

int main(void)
{
    int age = get_int("Enter age: ");
    int student = get_int("Student? (1=yes, 0=no): ");

    printf("Ticket Price: %d\n", ticket_price(age, student));
}

int ticket_price(int age, int student)
{
    if (age < 12)
        return 50;
    else if (age <= 60)
    {
        if (student == 1)
            return 80;
        else
            return 100;
    }
    else
        return 60;
}
