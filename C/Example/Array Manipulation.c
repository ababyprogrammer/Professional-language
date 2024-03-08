#include <stdio.h>

int main()
{
    const int arraySize = 5;
    int numbers[arraySize] = {1, 2, 3, 4, 5};

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
