#include "main.h"

/**
 * _strlen -  swaps the values of two integers.
 * @s: String input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Prints string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
