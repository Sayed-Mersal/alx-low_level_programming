#include "main.h"

/**
 * _pow_recursion - search a string for any of a set of bytes
 * @x: base
 * @y: exponent
 * Return: pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such bytes is found
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

return (x * _pow_recursion(x, y - 1));
}
