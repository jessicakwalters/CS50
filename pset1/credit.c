#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Number: ");
    long number = get_long_long();

    long times_two = 0;
    long times_two_sum = 0;
    long other_sum = 0;
    int total_sum = 0;

    for (long i = 100; i < number * 10; i *= 100)
    {
        times_two = 2 * ((number % i) - (number % (i / 10))) / (i / 10);

        if (times_two < 10)
        {
           times_two_sum += times_two;
        }
        else
        {
            times_two_sum += (times_two % 10) + 1;
        }
    }

    for (long i = 10; i < number * 10; i *= 100)
    {
        other_sum += ((number % i) - (number % (i / 10))) / (i / 10);
    }

    total_sum = times_two_sum + other_sum;

    if (total_sum % 10 == 0)
    {

        long length = log10(labs(number)) + 1;

        long power = pow(10, (length - 2));

        long first_two = (number - (number % power)) / power;

        if (first_two == 34 || first_two == 37)
        {
            printf("AMEX\n");
        }
        else if (51 <= first_two && first_two <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (40 <= first_two && first_two <= 49)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
