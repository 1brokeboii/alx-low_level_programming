#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be treated.
 *
 * This function takes a string as input and prints every other character
 * from the string.
 */

void puts2(char *str)

{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i+= 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
