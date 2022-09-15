#include "main.h"
/**
 * _isdigit - checks for a digit from 0 through  9
 * @c: input
 *
 * Return: 1 if c if c is a digit
 * else return 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c < '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
