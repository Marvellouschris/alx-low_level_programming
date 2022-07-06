#include "main.h"
/**
 * _islower - checks for lowercase
 * description - return intetger
 * @c: c  intger
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}