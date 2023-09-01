#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: The string to be determined.
 *
 * Return: The length value of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 23;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
