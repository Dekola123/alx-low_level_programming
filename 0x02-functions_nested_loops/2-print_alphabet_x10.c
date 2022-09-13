#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet_x10 - printing 10x the alhabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char low;
	int co;

	co = 0;

	while (co < 10)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
			_putchar('\n');
		}
	}
}
