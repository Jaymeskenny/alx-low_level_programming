#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;
	count = 0;
		while (count < 10)
		{
			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			{
				_putchar(alphabet);
			}
			count++;
			_putchar('\n');
		}
}
