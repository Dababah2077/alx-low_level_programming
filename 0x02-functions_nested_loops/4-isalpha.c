#include "main.h"
/**
 * _isalpha - Entry point
 * _isalpha: function to check if character is a letter
 * @c: check input of function
 * Return: 1 if 'c' is a letter
 * otherwise always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
