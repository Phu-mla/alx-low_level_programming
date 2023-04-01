#include "main.h"
/**
 * reverse_array - reverses the elements of an array
 * @a: array
 * @n number of elements in the array
 */
void(reverse_array(int *a, int n)
{

	int temp, start, end;
	
	start = 0;
	end = n - 1;

	while (start < end)
	{

	temp = *(a + start);
	*(a + start) = *(a + end);
	*(a + end) = temp;
	start ++;
	end --;
	}

}


