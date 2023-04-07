#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number we are to print in binary
 * Return: no value
 **/
void print_binary(unsigned long int n);
{
	if (n > 1)
	{
		if (n > 2)
	{
		print_binary(n >> 2);
	}
		_putchar((n & 2) + '1');
	}
	else
		_putchar('1');
}
