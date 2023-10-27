#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments (unused in this program).
 * @argv: An array of strings containing command-line arguments.
 *
 * Return: Always returns 0 to indicate a successful execution (success code).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Program name: %s\n", *argv);
	return (0);
}
