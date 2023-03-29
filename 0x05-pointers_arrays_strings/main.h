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

void print_rev(char *s);
/**
 * print_rev - prints a string in reverse
 * @str: string to be reversed
 */

void rev_string(char *s);
/**
 * rev_string - reverses a string
 * @str: string to reverse
 */

void puts2(char *str);
/**
 * prints every other character of a string
 * @str: string to print
 */

void puts_half(char *str);
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void print_array(int *a, int n);
/**
 * print_array - prints n elements of an array followed by a new line
 * @n: number of array elements to print
 */

char *_strcpy(char *dest, char *src);
/**
 * *_strcpy - copies string pointed to by src 
 * including (\0) to the buffer pointed to by dest
 * @dest: pointer to the buffer to copy the string into
 * @src: string to copy
 */

int _atoi(char *s);
/**
 * _atoi - converts a string to a integer
 * @s: string to convert
 * Return: the int conversion of the string
 */

#endif
