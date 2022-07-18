#include "main.h"
#include <string.h>

/**
 * set_string -  a function that sets the value of a pointer to a char.
 * @s: first memory area
 * @to: second memory area
*/

void set_string(char **s, char *to)
{
	*s = to;
}
