#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @r: number to calculate the square root of
 *
 * Return: the square root of the number
 */
int _sqrt_recursion(int r)
{
	if (r < 0)
		return (-1);
	return (actual_sqrt_recursion(r, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @r: number to calculate the sqaure root of
 * @n: iterator
 *
 * Return: the square root of the number
 */
int actual_sqrt_recursion(int r, int n)
{
	if (n * n > r)
		return (-1);
	if (n * n == r)
		return (n);
	return (actual_sqrt_recursion(r, n + 2));
}
