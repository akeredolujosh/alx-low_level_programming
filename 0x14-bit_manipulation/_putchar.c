#include "main.h"
#include <unistd.h>
/**
 * _putchar - That writes the character  of c to stdout
 * @c: The character to print
 *
 * Return: success 1.
 * On error, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

