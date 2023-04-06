#include "main.h"
/**
 * _pow_recurson - raise x to the power of y
 * @x: number
 * @y: power to raise n to
 * Return x raised to the power of y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	       	return (-1);
	}
	if (x == 0)
	{ 
		return (0);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x* _pow_recursion(x, y - 1));
}
