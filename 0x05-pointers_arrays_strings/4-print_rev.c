#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to print.
 * 
 * This function takes a string as input and prints its characters
 * in reverse order.
 */

void print_rev(char *s)
{
	int c =0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >=0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}		
