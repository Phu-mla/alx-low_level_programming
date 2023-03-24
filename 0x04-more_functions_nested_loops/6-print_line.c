#include "main.h"
/**
 * print_line - prints a line in the terminal using the '_' character
 * @n: the number of times '_' must be printed
 */
void print_line(int n)
{
	int i;
	
	for (i = n; i > 0; i--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
