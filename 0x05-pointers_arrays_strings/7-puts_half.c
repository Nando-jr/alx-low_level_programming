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
 * puts_half - Prints half of a string.
 * @s: the string to print
 *
 * Return: void
 */
void puts_half(char *s)
{
	int lgt = _strlen(s) + 1;
	int n;

	if (lgt % 2 == 0)
	{
		n = lgt / 2;
	}
	else
	{
		n = (lgt - 1) / 2;
	}

	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
