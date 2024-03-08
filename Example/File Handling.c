#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w");
    if (file != NULL)
    {
        const char data[] = "This is a file handling example.";
        if (fprintf(file, "%s", data) < 0)
        {
            fclose(file);
            return 1; // Error handling for fprintf
        }
        fclose(file);
    }
    else
    {
        return 1; // Error handling for file opening
    }
    return 0;
}
