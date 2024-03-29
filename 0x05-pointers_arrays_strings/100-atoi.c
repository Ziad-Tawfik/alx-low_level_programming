/**
 * _atoi - a function that convert a string to an integer.
 * @s: a pointer that points to string
 *
 * Return: return a integer value
 */

int _atoi(char *s)
{
	int i;
	unsigned int int_num;
	short sign, catch_it;

	i = int_num = 0;
	catch_it = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			catch_it = 1;
			int_num *= 10;
			int_num += (s[i] - '0');
		}
		else if (catch_it == 1)
			break;
		i++;
	}
	int_num *= sign;
	return (int_num);
}
