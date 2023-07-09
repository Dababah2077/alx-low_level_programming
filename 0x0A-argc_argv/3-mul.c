#include <stdio.h>
#include <string.h>
/**
 * _atoi - Entry point
 * _atoi: convert strings into numbers
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}


/**
 * main - Entry point
 * main: multiplies two integers
 * @argc: input
 * @argv: input
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	res = x * y;

	printf("%d\n", res);

	return (0);
}
