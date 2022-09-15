#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: times diagonal line is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int space;

	space = 0;

	for (space = 0; space <= n; space++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ' * space);
			_putchar(92);
		}
		_putchar('\n');
	}
}
