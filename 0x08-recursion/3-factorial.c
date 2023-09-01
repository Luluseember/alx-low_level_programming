#include "main.h"

/**
 * factorial - will return the factorial of a given number
 * @t: number to return the factorial from
 *
 * Return: factorial value of t
 */
int factorial(int t)
{
	if (t < 0)
		return (-1);
	if (t == 0)
		return (1);
	return (t * factorial(t - 1));
}
