#include <stdio.h>

/**
* main - print first 98 Fibonacci numbers without using long long, malloc,
* pointers, array/tables, or structures
* Return: 0
*/

int main(void)
{
int counter;
unsigned long tmp1 = 1, tmp2 = 2, sum = 0;
unsigned long a_head, a_tail, b_head, b_tail, overflow, sum_tail, sum_head;

printf("%lu, %lu, ", tmp1, tmp2);
for (counter = 2; counter <= 91; counter++)
{
sum = tmp1 + tmp2;
tmp1 = tmp2;
tmp2 = sum;
printf("%lu, ", sum);
}

a_tail = tmp1 % 1000000000;
a_head = tmp1 / 1000000000;
b_tail = tmp2 % 1000000000;
b_head = tmp2 / 1000000000;

while (counter < 98)
{
overflow = (a_tail + b_tail) / 1000000000;
sum_tail = (a_tail + b_tail) -(overflow * 1000000000);
sum_head = a_head + b_head + overflow;
printf("%lu%lu", sum_head, sum_tail);
if (counter < 97)
printf(", ");
else
printf("\n");
a_head = b_head;
a_tail = b_tail;
b_head = sum_head;
b_tail = sum_tail;
counter++;
}
return (0)
}

