#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: index of the bit we want to get
 * Return: the value of bit
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && (1 << index) == 0)
		return (0);
	while (n)
	{
		if (index == i)
		{
			return (n & 1);
		}
		n = n / 2;
		i++;
	}
	return (-1);
}
