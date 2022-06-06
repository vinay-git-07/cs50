#include <cs50.h>
#include <stdio.h>

int check_sum(long number);

int main(void)
{
    //getting the input
    long number = get_long("Number: ");

    //checking whether the card number is valid
    if (check_sum(number) % 10 == 0)
    {
        int count = 0;

        //counting the length of the number and checking the card requirements
        while (number > 0)
        {
            number /= 10;
            count++;

            //criteria to match American Express card
            if ((number == 34 || number == 37) && count == 13)
            {
                printf("AMEX\n");
                break;
            }

            //criteria to match Visa card
            else if ((count == 12 || count == 15) && number == 4)
            {
                printf("VISA\n");
                break;
            }

            //criteria to match Mastercard card
            else if ((number >= 51 && number <= 55) && count == 14)
            {
                printf("MASTERCARD\n");
                break;
            }

            else if (number == 0)
            {
                printf("INVALID\n");
            }
        }
    }

    else
    {
        printf("INVALID\n");
    }
}


int check_sum(long number)
{
    int count = 0;
    int digit_sum = 0;
    int remaining_sum = 0;

    while (number > 0)
    {
        //summing the remaining digits
        remaining_sum += number % 10;
        number /= 10;


        int x = 2 * (number % 10);

        //if the product is in two digits, we have to count the digits and not the product
        if (x > 9)
        {
            digit_sum += x % 10;
            x /= 10;
        }
        
        //summing the product digits
        digit_sum += x;
        number /= 10;
    }
    return remaining_sum + digit_sum;
}
