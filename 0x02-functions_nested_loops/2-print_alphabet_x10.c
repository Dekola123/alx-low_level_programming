#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet, in lower
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int low;
	int co;

	co = 0;
	while (co < 10)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		co++;
		_putchar('\n');
	}
}
