#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int u;

	u = 0;
	u = *a;
	*a = *b;
	*b = u;
}
