#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2.
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, length, i, j;

	num = n;

	if (s1 == NULL) /* condition 3 */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* to account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* condition 2 */
		num = _strlen(s2);

	length = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * length); /* malloc and condition 1 */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
