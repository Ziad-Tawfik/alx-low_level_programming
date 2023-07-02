#include <stdio.h>

/**
* main - entry point to add even numbers in fib series
* Return: always zero
*/

int main(void)
{
unsigned long tmp1 = 1, tmp2 = 1, tmp3 = 0, sum = 0;

while (tmp3 < 4000000)
{
if (tmp3 % 2 == 0)
sum += tmp3;
tmp3 = tmp2;
tmp2 += tmp1;
tmp1 = tmp3;
}
printf("%lu\n", sum);
return (0);
}

