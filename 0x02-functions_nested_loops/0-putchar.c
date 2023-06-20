#include "main.h"

/**
  * main - prints the string "_putchar"
  *
  * Return: 0 on success.
  */

int main(void)
{
	char *str;
	int i;

	str = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
