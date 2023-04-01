#include "main.h"
/**
 * string _toupper - changes all letters in a string to uppercase
 * @s: string to capitalize
 * Return: uppercase string
 */
char *string _toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
