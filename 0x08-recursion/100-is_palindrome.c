#include "main.h"
int check_pal(char *s, int i, int length);
int _strlen_recursion(char*s);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if(*s == 0)
	{
	       	return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively checks for palindrome
 * @s: string to check
 * @i: iterator
 * @length: string length
 * Return: 1 if palindroome, 0 if not
 */
int check_pal(char *s, int i, int length)
{
	if(*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{ 
		return (1);
	}
	return (check_pal(s, i + 1, length - 1));
}
