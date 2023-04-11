#include "main.h"
/*
 * _isupper - checks if a letter is uppercase
 * Return: 1 if letter is uppercase, 0 if not
 * @c: letter to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
