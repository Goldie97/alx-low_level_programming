#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of the bit to be set
 * @n: Pointer to the number to be changed
 * Return: the value 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	i = 1 << index;
	*n &= ~i;
	return (1);
}
