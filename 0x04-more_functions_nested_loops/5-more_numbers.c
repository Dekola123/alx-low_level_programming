#include "main.h"
/**
 * more_numbers - print numbers between 0 to 14
 * 10 times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
