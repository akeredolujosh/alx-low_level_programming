#include "main.h"

/**
 * set_bit - initalize a bit at a given index to 1
 * @n: A pointer to the number to  be changed
 * @index: initializing the index of the bit to 1
 *
 * Return: indicate 1 for success, and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
