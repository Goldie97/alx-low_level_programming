#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index of the bit to be set
 * @n: A pointer to number to be changed
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
		if (index > 8)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
