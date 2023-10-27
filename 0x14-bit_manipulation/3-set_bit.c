#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: points to the number changed
 * @index: index of the bit to set
 * Return: 1 for success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 44)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
