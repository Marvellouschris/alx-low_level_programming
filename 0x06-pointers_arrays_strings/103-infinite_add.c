#include "main.h"

/**
 * infinite_add - add two numbers
 * Description - a function that adds two numbers
 * @n1: the first number
 * @n2: second number
 * @r: buffer that the function will use to store result
 * @size_r: buffer size
 * Return: a pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b = 0, c = 0, d = 0, e = 0, f, g, h;

	while (n1[b] != '\0')
		b++;
	while (n2[c] != '\0')
		c++;
	if (b > c)
		d = b;
	else
		d = c;
	if (d + 1 > size_r)
		return (0);

	r[d] = '\0';

	for (f = d - 1; f >= 0; f--)
	{
		b--;
		c--;
		if (b >= 0)
			g = n1[b] - '0';
		else
			g = 0;
		if (c >= 0)
			h = n2[c] - '0';
		else
			h = 0;
		r[f] = (g + h + e) % 10 + '0';
		e = (g + h + e) / 10;
	}
	if (e == 1)
	{
		r[d + 1] = '\0';
		if (d + 2 > size_r)
			return (0);
		while (d-- >= 0)
			r[d + 1] = r[d];
		r[0] = e + '0';
	}
	return (r);
}
