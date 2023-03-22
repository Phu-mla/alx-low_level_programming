#include "main.h"

/**
 * print_alphabet-x10 - prints lowercase alphabet 10 times.
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count =1; count<= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
