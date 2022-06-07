#include <stdio.h>
/**
 * main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
