#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: the number
 * @index: the index of the bit to return
 *
 * Return: returns the value of the bit at index or -1 on failure
 *int get_endianness(void)
{
	/* have a 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian would store 00, little would store 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
