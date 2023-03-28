#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * _putchar - puts character into standard out
 * @c: character to put into std out
 */

void reset_to_98(int*n);

/**
 * reset_to_98 - takes a pointer to an int and updates the value it points to with 98
 *@n: pointer to n
 */

void swap_int(int*a, int*b);
/**
 * swap_int - swaps the value of two ints
 * @a: first integer to swap
 * @b: second integer to swap
 *
 */

int _strlen(char *s);
/**
 * _strlen - calculates the number of characters in a string
 * @s: the string whose characters we are calculating
 * Return: the number of characters in the string
 */

void _puts(char *str);
/**
 * _puts - prints a string followed by a newline to stdout
 * @str: string to be printed out
 */

#endif
