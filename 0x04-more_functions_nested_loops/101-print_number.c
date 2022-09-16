#include "main.h"
/**
 * print_number - print and integer
 * @n: integer to print
 * Return: nothing to return
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0);
	{
		_putchar(45);
		_putchar(x);
		x = -n;
	}
	if (n >= 0);
	{
		_putchar(x);
		x = n;
	}
}
