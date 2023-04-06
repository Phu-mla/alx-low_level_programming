#include <unistd.h>
/**
 * _putchar - writes a character into stdout
 * @c: character to print
 * Return: 1 (Success), -1 on error and set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
