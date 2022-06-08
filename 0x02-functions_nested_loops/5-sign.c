#include "main.h"

/**
 * print_sign - Evaluates if the input is
 * greater, equal or les than 0.
 *
 * @n: The input number is an integer.
 *
 * Return: 1 if greater than zero. 0 if zero.
 * -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
