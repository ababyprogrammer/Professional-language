#include <cs50.h>
#include <stdio.h>

int get_negativ_int(void)

int main(void)
{
    int i = get_negativ_int();
    printf("%i\n", i)
}

int get_negativ_int(void)
{
    int n;
    do
    {
        n = get_int("Negativ Integer");
    }
    while (n < 0)
    return n;
}