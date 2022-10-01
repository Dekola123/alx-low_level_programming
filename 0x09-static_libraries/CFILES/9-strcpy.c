#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the stringpointed to by src
 * including the terminating null bytes, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @str: string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *str)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(str + count);
		if (*(str + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
