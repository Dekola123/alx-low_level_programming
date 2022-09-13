#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabets in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
