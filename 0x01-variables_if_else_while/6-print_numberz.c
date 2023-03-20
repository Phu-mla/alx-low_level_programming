#include<stdio.h>
/*
 *main - Prints numbers from 0 to 9
 *Return : Always 0 (success)
 */
int main(void)
{
	int n ='0';

	while(n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
