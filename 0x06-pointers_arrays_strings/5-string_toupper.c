#include "main.h"
/**
 * *string_toupper - Entry point
 * *string_toupper:  changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: A pointer of changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
			str[index]++;
		}
	}
	return (str);
}
