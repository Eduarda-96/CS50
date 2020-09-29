#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n; //height
    int i; //number of rows
    int j; //number of columns
    int c; //number of spaces

    do
    {
        n = get_int("Height:");
    }
    while (n < 1 || n > 8);

    for (i = 0; i < n; i++)
    {

        for (c = n - 1 ; c > i; c = c - 1)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
