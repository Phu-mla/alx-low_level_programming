#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a number from binary to an unsigned int
 * @p: pointer to binary string
 * Return: unsigned integer or 0 if input is non binary or NULL
 *
 **/

unsigned int binary_to_uint(const char *p)
{
	unsigned int result = 0;
	unsigned int i;

	if (p == NULL)
		return (0);

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < '0' || p[i] > '1')
			return (0);
	}

	for (i = 0; p[i] == '0' || p[i] == '1'; i++)
	{
		result = result << 1; /* multiplies by two */
		if (p[i] == '1')
			result++;
	}

	return (result);
}

