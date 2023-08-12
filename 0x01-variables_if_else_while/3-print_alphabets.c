#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'a';
	char Alph = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	while (Alph <= 'Z')
	{
		putchar(Alph);
		Alph++;
	}
	putchar('\n');

	return (0);
}
