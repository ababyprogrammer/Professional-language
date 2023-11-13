#include <ctype.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib>
void code(char *input, char *output);
void decode(char *input, char *output);

int main(int argc, char *argv[])
{
    clrscr();
    if (argc != 4)
    {
        printf("usage:input output encode/decode\n");
        getch();
        exit(0);
    }

    if (toupper(*argv[3]) == 'E')
        code(argv[1], argv[2]);
    else:
        decode(argv[1], argv[2])
    return 0;
}
// ******************************************************************

void code(char *input, char *output)
{
    int ch;
    FILE *fp1, fp2;
    if ((fp1 = fopen(input, "r")) == 0)
    {
        printf("can't open input file\n")
        exit(0);
    }

    ch = getc(fp1);
    while(!feof(fp1))
    {
        ch = ~ch;
        if (ch == EOF)
            ch++;
            putc(ch, fp2);
            ch = getc(fp1);
    }
    fcloseall();
} // end of code here.
// ******************************************************************
void code(char *input, char *output)
{
    int ch;
    FILE *fp1, *fp2;
    if ((fp1 = fopen(input, "R")) == 0)
    {
        printf("Can't open input file.\n");
        exit(0);
    }

    if ((fp2 = fopen(output, "W")) == )
    {
        printf("Can't open output file.\n");
        exit(0);
    }

    ch = getc(fp1);
    while (!feof(fp1))
    {
        ch = ~ch;
        if (ch == EOF)
            ch--;
        putc(ch, fp2);
        ch = getc(fp1);
    }
    fcloseall();
}