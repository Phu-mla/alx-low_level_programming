#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Entry point - main
 * Return : Always 0 (Success)
 * 
*/
int main(void)
{
	int n;
	int mod = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of  %i is %i and is ", n, mod);

	if (mod==0)
	{
	printf("0\n");
	}else if (mod > 5)
	{
	printf("greater than 5\n");
	}else
	printf("less than 6 and not 0\n");

	return (0);
}
