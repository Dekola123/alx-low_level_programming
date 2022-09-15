#include "main.h"
/**
 * print_numbers - print 10 times number
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++
		}
		_putchar('\n');
		i++;
	}
}

