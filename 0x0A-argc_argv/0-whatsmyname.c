#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the number of parameters that goes into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Retrun: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
