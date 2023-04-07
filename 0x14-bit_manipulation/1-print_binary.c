#include "main.h"

/**
 * print_binary - Function that prints the binary
 * equivalent of a number
 * @n: number to be printed in binary
 **/
void print_binary(unsigned long int n);
{
	int k, count = 0;
	unsigned long int existing;

	for (k = 13; k >= 0; k--)
	{
		existing = n >> k;

		if (existing & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
