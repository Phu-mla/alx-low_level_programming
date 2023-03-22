#include "main.h"
/**
 * jack_bauer - print evry minute of a day
 */

void jack_bauer(void)
{

	int hours = 0;
	int mins = 0;

	while (hours < 24)
	{
		while (mins < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		mins = 0;
		hours++;
	}
}
