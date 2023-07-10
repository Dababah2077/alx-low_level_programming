#include "main.h"
/**
 * _isalpha - Entry point
 * _isalpha: A program checks alphabetic characters
 * @c: input
 * Return: 1 if c is a characters
 * Otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
