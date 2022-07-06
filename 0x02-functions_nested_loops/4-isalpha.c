<<<<<<< HEAD
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: is char type
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
=======
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: is char type
 * Return: 1 (if letter)
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
>>>>>>> 923dd04aaa70ad992c6baf431235c6a0164734db
