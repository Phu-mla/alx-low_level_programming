#include "main.h"

/**
 * _islower - checks if letter is uppercase
 * Return: 1 if lowercase, 0 if uppercase
 * @c - int argument
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
