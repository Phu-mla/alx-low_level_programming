#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: number
 * @index: index to set
 * Return: 1 (success). -1 on error
 *
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1); /* checks if index is larger than # of positions */

	mask = 1 << index; /* shifts 1 to the index position */

	*n = *n | mask;

	return (1);
}
