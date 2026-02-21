#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_palindrome(int arr[], int len);

int main(void)
{
    int n = get_int("Enter number: ");
    int temp = n;
    int arr[20];
    int len = 0;

    while (temp > 0)
    {
        arr[len++] = temp % 10;
        temp /= 10;
    }

    if (is_palindrome(arr, len))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

bool is_palindrome(int arr[], int len)
{
    for (int i = 0; i < len/2; i++)
    {
        if (arr[i] != arr[len-1-i])
            return false;
    }
    return true;
}
