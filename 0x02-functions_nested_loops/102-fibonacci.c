#include <stdio.h>

/**
* main - entry point Printing first 50 Fibonacci numbers
* Return: always zero
*/

int main(void)
{
int i;
long int tmp1 = 1, tmp2 = 1, tmp3;

for (i = 0; i < 50; i++)
{
printf("%ld", tmp2);
if (i < 49)
printf(", ");
else
printf("\n");
tmp3 = tmp2;
tmp2 += tmp1;
tmp1 = tmp3;
}
return (0);
}

