#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 50
#define SIZE_INCREMENT 50

typedef struct String
{
    char *string;
    size_t capacity;
    size_t length;
} String;

String *string_create(const char *input_string)
{
    String *new_string = (String *)malloc(sizeof(String));
    if (new_string == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    size_t length = strlen(input_string);
    new_string->length = length;
    new_string->capacity = length + INITIAL_CAPACITY;
    new_string->string = (char *)malloc(new_string->capacity * sizeof(char));

    if (new_string->string == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    strcpy(new_string->string, input_string);
    return new_string;
}

void string_destroy(String *string)
{
    free(string->string);
    free(string);
}

void string_resize(String *string, size_t new_capacity)
{
    char *temp = (char *)realloc(string->string, new_capacity * sizeof(char));
    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        exit(1);
    }

    string->string = temp;
    string->capacity = new_capacity;
}

void string_append(String *string, const char *append_string)
{
    size_t append_length = strlen(append_string);
    if (string->length + append_length + 1 > string->capacity)
    {
        string_resize(string, string->capacity + SIZE_INCREMENT);
    }

    strcpy(string->string + string->length, append_string);
    string->length += append_length;
}