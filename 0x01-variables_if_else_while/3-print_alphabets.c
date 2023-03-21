#include<stdio.h>
/**
 * Entry point - main
 * Return : Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	do {
		putchar (uppercase);
		uppercase++;

	} while (uppercase <= 'Z');

	putchar('\n');

	return (0);
}
