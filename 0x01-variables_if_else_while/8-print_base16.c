#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *str = "0123456789abcdef";

	for (n = 0; n <= 15; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
	return (0);
}
