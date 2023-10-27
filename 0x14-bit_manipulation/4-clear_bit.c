#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points to the number
 * @index: index of the bit to clear
 * Return: 1 for success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 44)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
