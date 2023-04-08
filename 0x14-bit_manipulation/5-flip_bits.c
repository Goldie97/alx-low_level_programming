#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: main number
 * @m: second number we want to flip n to
 *
 * Return: number of flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
