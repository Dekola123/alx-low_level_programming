#include <stdio.h>
/**
 * main - replace mutiples of 3 and 5 with fizz buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char ch1[] = "Fizz";
	char ch2[] = "Buzz";
	char ch3[] = "FizzBuzz";

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" %s", ch3);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", ch1);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", ch2);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
