#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat", "Amirmahdi", "Izadyar"};

    sting s = get_string("String: ");
    for (i = 0; i < 6; i++)
    {
        if (strcmp(string[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}