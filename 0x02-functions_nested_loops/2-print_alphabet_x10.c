#include "main.h"
/**
 * main - Entry point
 *
 * printing 10x the alhabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
			_putchar('\n');
		}
		co++
	}
}
