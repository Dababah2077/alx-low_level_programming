#include <stdio.h>
/**
 * main- Entry point
 * main: prints the number of arguments passed into it
 * @argc: int
 * @argv: list
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int x = 0;
	(void)argc;
	while (argv[x])
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
