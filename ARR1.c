#include <stdio.h>
#include <cs50.h>

void input_array(int arr[], int n);
void print_array(int arr[], int n);

int main(void)
{
    int n = get_int("Enter size: ");
    int arr[n];

    input_array(arr, n);
    print_array(arr, n);
}

void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = get_int("Element: ");
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
