#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string to find length of
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * rev_string - reverses a string
 * @str: string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) -1);
	char swap;

	while (i < j)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
		i++;
		j--;
	}
}
