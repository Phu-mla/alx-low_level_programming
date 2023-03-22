#include "main.h"

/**
 * print_alphabet - printslowercase alphabet, followed by a newline.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;
	
	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
