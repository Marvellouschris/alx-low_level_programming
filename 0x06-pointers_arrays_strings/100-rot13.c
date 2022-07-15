#include "main.h"

/**
 * rot13 - encodes a string
 * Description - a function that encodes a string
 * @s: input value, string to be encoded
 * Return: the string
*/

char *rot13(char *s)
{
	int b, c;
	char d[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char e[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; d[c] != '\0'; c++)
		{
			if (s[b] == d[c])
			{
				s[b] = e[c];
				break;
			}
		}
	}
	return (s);
}
