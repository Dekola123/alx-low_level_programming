#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times to print
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (space = 0; space < i; space++)
			{
				putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
