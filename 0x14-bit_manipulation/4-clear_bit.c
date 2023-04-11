#include "main.h"

/**
 * clear_bit - seting the value of a given bit to 0
 * @n: A pointer to the numb to be changed
 * @index: The index of the bit to clear
 *
 * Return: An indicator where 1 signifies success, and -1 signifies failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
