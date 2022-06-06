#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // prompts the user for input until a valid input is given
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // loops for the height
    for (int i = 0; i < height; i++)
    {

        //loops for the spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        //loops for the hash symbols
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        //adds a new line
        printf("\n");
    }
}
