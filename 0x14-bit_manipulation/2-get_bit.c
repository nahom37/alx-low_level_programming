#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long in n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
