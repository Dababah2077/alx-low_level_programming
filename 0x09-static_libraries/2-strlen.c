#include "main.h"
/**
 * _strlen - Entry point
 * _strlen:  returns the length of a string
 * @s: checks the input of function
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
