#include "main.h"

/**
* print_number - to print numbers
* @n: integer
* Return: void
*/

void print_number(int n)
{
int j, i = 1, tens = 1, tmp1, tmp2;

if (n < 0)
{
_putchar('-');
n *= -1;
}
tmp1 = n;
tmp2 = n;
while (tmp1 >= 10)
{
tmp1 /= 10;
i++;
}
for (j = 1; j < i; j++)
tens *= 10;
while (tens > 1)
{
_putchar((tmp2 / tens) % 10 + '0');
tens /= 10;
}
_putchar(tmp2 % 10 + '0');
}

