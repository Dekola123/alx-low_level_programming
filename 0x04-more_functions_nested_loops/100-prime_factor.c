#include <stdio.h>
/**
 * main -  printing prime factors of a number
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n = n / pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
