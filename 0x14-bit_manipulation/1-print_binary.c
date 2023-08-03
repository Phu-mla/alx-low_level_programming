#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints the binary conversion of a number
 * @n: number to be converted to binary
 * Return: void
 *
 **/

void print_binary(unsigned long int n)
{
	int binary;
	int flag = 0; /* flag to make sure leading 0s are not printed */
	int size; /* size in bits of n, minus 1 for +/- bit */
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	size = sizeof(n) * 8 - 1;
	for (i = size; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');
	}
}
