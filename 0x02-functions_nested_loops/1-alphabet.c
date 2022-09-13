#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
int main(void)
{
	int low;
	print_alphabet();

	return (0);
}
