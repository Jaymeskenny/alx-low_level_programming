#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: value of int to print
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}
