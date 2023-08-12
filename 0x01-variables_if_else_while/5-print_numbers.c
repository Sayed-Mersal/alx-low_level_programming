#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x % 2 != 0 && x <= 10)
	{
		printf("%i", x);
		x++;
	}
	printf('\n');

	return (0);
}
