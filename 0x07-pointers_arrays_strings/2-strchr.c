#include "main.h"

/**
 * *_strchar - fils memory with a constant byte
 * @s: pointer to put the constant
 *@c: constant
 * Return: pointer to s
*/

char *_strchar(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0')
}
