#include "main.h"
/**
 * more_numbers - print numbers between 0 to 14
 * 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar('0' + (ch / 10));
			_putchar('0' + (ch % 10));
		}
		_putchar('\n');
	}
}
