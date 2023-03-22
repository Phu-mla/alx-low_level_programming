#include "main.h"
/**
 *_abs - calculate absolute value of an int
 *Return: absolute value
 *@num: int argument
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	else
		return (0);
}
