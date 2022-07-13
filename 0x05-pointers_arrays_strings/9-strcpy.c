#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *  @dest: destination.
 *  @src: source.
 *  Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (; count >= 0; count++)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
	}
	return (dest);
}
