#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of times to print
 * @_: character to be printed
 *
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
