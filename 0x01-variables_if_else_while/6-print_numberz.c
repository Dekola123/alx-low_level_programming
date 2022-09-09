#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	d = '0';
	
	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
