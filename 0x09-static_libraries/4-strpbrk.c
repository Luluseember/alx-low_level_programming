#include "main.h"
/**
 * _strpbrk - finds the first character of first string
 * and matches it to any character of second string
 * @s: input
 * @s2: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *s2)
{
	int k;

	while (*s)
	{
		for (k = 0; s2[k]; k++)
		{
		if (*s == s2[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
