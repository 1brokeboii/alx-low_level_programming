#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 * Return: The converted integer.
 *
 * Description:
 * This function takesa string as input and converts it to an integer.
 */
i
int _atoi(char *s)
{
    int c = 0;
    unsigned int ni = 0;
    int min = 1;

    while (s[c])
    {
        if (s[c] == '-')
        {
            sign *= -1;
        }
        else if (s[c] >= '0' && s[c] <= '9')
        {
            ni = (ni * 10) + (s[c] - '0');
        }
        else
        {
            break; // Exit the loop when a non-digit character is encountered
        }
        c++;
    }

    return ni * sign;
}
