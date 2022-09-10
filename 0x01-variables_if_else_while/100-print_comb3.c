#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int d;
	int i;

	for (d = '0'; d <= '9'; d++)
	{
		if (i <= '9')
		{
			d = d && i;
			i++;

			putchar(d);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
