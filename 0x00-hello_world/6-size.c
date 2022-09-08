#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (long unsigned)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (long unsigned)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (long unsigned)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (long unsigned)sizeof(c));
	printf("Size of a foat: %lu bytes(s)\n", (long unsigned)sizeof(f));
	return (0);
}
