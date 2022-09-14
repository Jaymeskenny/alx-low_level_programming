#include <stdio.h>
/**
 * main - print first 50 fibonacci.
 *
 * Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tsum = 0;

	for (i = 0; i < 48; i++)
	{
		tsum = tsum + y;
	}
sum = x + y;
x = y;
y = sum;
}
printf("%ld\n", tsum);
return (0);
