#include "main.h"

/**
 * _strln - return the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strln(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
