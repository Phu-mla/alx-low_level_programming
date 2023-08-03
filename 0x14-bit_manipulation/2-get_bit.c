#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns value of a bit at an index
 * @num : number 
 * @index: index of the bit to be returned
 * Return : value of the bit (Success), -1 on error
 *
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;

	if (index > sizeof(n) * 8 - 1)
		return (-1); 
	
	result = (n >> index) & 1;

	if (result != 0 && result != 1)
		return (-1);

	return (result);
}
