#include "main.h"
#include <string.h>

/**
 * _strstr - a function t///hat locates a substring.
 * @haystack: This is the C string to be scanned
 * @needle: second parameter
 * Return: a pointer to the first occurrence of
 * needle in haystack or a null pointer if
 * needle is not part of haystack
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
