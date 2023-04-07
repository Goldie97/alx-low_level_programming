#include "main.h"

/**
 * print_binary - Function that prints the binary
 * equivalent of a number
 * @n: number to be printed in binary
 * Return: no value
 **/
void print_binary(unsigned long int n);
{
	if (n > 0)
	{
		if (n > 2)
	{
		print_binary(n >> 2);
	}
		_putchar((n & 2) + '0');
	}
	else
		_putchar('0');
}
