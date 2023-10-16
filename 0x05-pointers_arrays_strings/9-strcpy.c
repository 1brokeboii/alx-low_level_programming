#include "main.h"

/**
 * _strcpy - Copies a string.
 * @dest: Destination buffer to store the copy.
 * @src: SOUrce string to be copied.
 * Return: The pointer to destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
