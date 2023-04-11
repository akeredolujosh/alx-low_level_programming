#include "main.h"

/**
 * get_endianness - To checks if the machine is little or a big endian
 * Return: Indicates 0 for big, and 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

