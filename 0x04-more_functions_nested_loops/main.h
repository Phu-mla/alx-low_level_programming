#ifndef _MAIN_H_
#define _MAIN_H_
int _putchar(char c);
/**
 * _putchar - puts character into stdout
 * @c: character to print out
 */

int _isupper(int c);
/**
 * _islower - checks if character is uppercase
 * @c: character to check
 * Return: 1 if uppercase, 0 if not
 */

int _isdigit(int c);
/**
 *_isdigit - tests if character is a digit
 *@c: character to test if it is a digit
 *Return: 1 if digit, 0 otherwise
 */

int mul(int a, int b);
/**
 *mul - multiplies two integers
 *@a: first integer
 *@b: second integer for multiplication
 *Return: product of the two integers
 */

void print_numbers(void);
/**
 * print_numbers - prints the numbers from 0 to 9, followed by a newline
 *
 */

void print_most_numbers(void);
/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 *
 */

void more_numbers(void);
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 */

void print_line(int n);
/**
 * print_line - prints a line on the terminal
 * @n: the number of times the character '_' should print
 */

void print_diagonal(int n);
/**
 * print_diagonal - prints a diagonal line 
 * @n: number of times the character '\' must be printed
 */

void print_square(int size);
/**
 * print_square - prints a square
 * @size - how many times the '#' must print
 */

void print_triangle(int size);
/**
 * print_triangle - print triangle using '#'
 * @size: size of the triangle
 */

#endif
