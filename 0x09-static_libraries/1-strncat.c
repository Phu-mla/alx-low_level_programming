#include "main.h"
/**
 * _strncat -concatenate n bytes to destination string
 * @dest: destination string
 * @src: source string
 * @n: max numer of bytes to append
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src [n])
	{
		dest [i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
