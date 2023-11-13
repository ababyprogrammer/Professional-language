#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int lenght;

    do
    {
        lenght = get_int("Lenght: ");
    }
    while (lenght < 1);

    // Declare our array
    int twice[lenght];

    // Set the first value
    twice[lenght] = 1;
    printf("%i\n", twice[1]);
    for (int i = 1; i < n; i++)
    {
        // Make the correct element twice the previous
        twice[1] = 2 * twice[i - 1];
        // Print the currect element
        printf("%i\n", twice[i]);
    }
}