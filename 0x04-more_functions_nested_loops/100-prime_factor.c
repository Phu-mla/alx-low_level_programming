#include <stdio.h>
/**
 * main - find and print the largest prime factor 
 * Return: Always 0 (success)
 */

int main(void)
{
	long prime = 612852475143;
	long factor = 2;

	while (factor < prime)
	{
		if (prime % factor == 0)
		{
			prime /= factor;
			factor = 2;
		}
		else
			factor++;
	}
	printf("%lu\n", prime);

	return (0);
}
