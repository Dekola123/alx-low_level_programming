#include <unistd.h>
#include "main.h"

/** _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Return: On success 1.
 * On error, 0
 * */
int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
