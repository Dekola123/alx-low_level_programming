#include "main.h"
/**
 * _strlen - returns the length on str
 * @s: string
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
