#include "main.h"

/**
 *_isalpha - checks if character is letter both lowercase or uppercase.
 *
 *@c: takes input from other functions
 *
 *Return: returns 1 if `c` is lowercase/ uppercase otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
