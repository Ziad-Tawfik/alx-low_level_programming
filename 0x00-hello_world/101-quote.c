#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * print a string
 *
 * Return: 1 on success.
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; str[i] !=  '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}

