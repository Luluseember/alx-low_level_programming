#include "main.h"
/**
 * _strspn -calculates the length of the number of characters
 * @str1 : string to be scanned.
 * @str2 : string characters to match.
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *str1, char *str2)
{
	unsigned int n = 0;
	int r;

	while (*str1)
	{
		for (r = 0; str2[r]; r++)
		{
			if (*str1 == str2[r])
			{
				n++;
				break;
			}
			else if (str2[r + 1] == '\0')
				return (n);
		}
		str1++;
	}
	return (n);
}
