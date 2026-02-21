#include <stdio.h>
#include <cs50.h>

char grade(int marks);

int main(void)
{
    int marks = get_int("Enter marks: ");
    printf("Grade: %c\n", grade(marks));
}

char grade(int marks)
{
    if (marks >= 80 && marks <= 100) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else return 'F';
}
