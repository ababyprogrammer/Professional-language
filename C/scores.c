#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int lenght, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    printf("Avrerage: %i\n", average(N, scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return sum / (float) lenght;
}