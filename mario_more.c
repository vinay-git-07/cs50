#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // prompts the user for input until valid input is given
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // loops through height number of rows
    for (int i = 0; i < height; i++)
    {
        //loops through for spaces
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        //loops through for the first pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        //prints the two spaces in between
        printf("  ");
        //loops through the second pyramid
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
