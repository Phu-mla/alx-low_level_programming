#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: last digit in the number
 * @number - int argument
 */

int print_last_digit(int number)
{
	if (number < 0)
		number *= -1;
	_putchar('0' + (number % 10));

	return (number % 10);
}
