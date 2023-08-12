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

	while (alph <= 'a')
	{
		putchar(alph);
		alph++;
	}

	while (Alph <= 'A')
	{
		putchar(Alph);
		Alph++;
	}
	putchar('\n');

	return (0);
}
