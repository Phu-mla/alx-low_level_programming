#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int*a, int*b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
