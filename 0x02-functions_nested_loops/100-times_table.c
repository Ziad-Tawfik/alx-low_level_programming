#include "main.h"
/**
* print_times_table - print times table
* @n: the input number
* Return: nothing
*/

void print_times_table(int n)
{
int i, j, k;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j > 0)
{
_putchar(',');
_putchar(' ');
}
if (k >= 100)
{
_putchar((k / 100) + 48);
_putchar(((k % 100) / 10) + 48);
_putchar(((k % 100) % 10) + 48);
}
else if (k >= 10 && k < 100)
{
_putchar(' ');
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
else if (k < 10 && j > 0)
{
_putchar(' ');
_putchar(' ');
_putchar(k + 48);
}
else
{
_putchar(48);
}
}
_putchar('\n');
}
}
}

