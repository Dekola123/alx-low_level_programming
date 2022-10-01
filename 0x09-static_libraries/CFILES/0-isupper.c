#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: character to check
 *
 * Return: On success 1
 * else, return 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
