#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to check
 *
 * Return: 1 if success
 * else return 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c < '10'));
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
