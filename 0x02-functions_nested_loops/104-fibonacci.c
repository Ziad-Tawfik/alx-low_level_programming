#include <stdio.h>

/**
* main - entry point Printing first 98 Fibonacci numbers
* Return: always zero
*/

int main(void)
{
int i;
unsigned long tmp1 = 1, tmp2 = 1, tmp3 = 0;

for (i = 0; i < 98; i++)
{
printf("%lu", tmp2);
if (i < 97)
printf(", ");
else
printf("\n");
tmp3 = tmp2;
tmp2 += tmp1;
tmp1 = tmp3;
}
return (0);
}


