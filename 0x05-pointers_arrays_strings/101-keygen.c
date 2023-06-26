#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - the program generate a 9 digits of random number as password
 *
 * Return: return 0.
 */

int main(void)
{
	int i, n;
	unsigned long int sum;
	char password[100];
	char *al = "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	n = i = sum = 0;
	srand(time(NULL));
	while (sum < (2772 - 122))
	{
		n = rand() % 62;
		password[i] = al[n];
		sum = sum + password[i];
		i++;
	}
	n = 2772 - sum;
	password[i] = n;
	password[++i] = '\0';
	printf("%s\n", password);
	return (0);
}
