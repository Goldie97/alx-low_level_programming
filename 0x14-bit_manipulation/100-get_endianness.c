#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *k;

	k = (char *) &i;

	return ((int)*k);
}
