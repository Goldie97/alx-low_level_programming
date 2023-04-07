#include "main.h"

/**
 * binary_to_uint - Function that converts binary to int
 * @b: binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int k = 0;

	if (b[i] == '\0')
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
		;
	i--, j = 1;
	for (; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			k += j;
	}
	return (k);
}
