#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 * @a: the array to be printed.
 * @n: array's length
 */

void print_array(int *a, int n)
{
	in ti;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
