#include <stdio.h>

int main()
{
    const char message[] = "Hello, World!\n";
    if (printf("%s", message) < 0)
    {
        return 1; // Error handling for printf
    }
    return 0;
}
