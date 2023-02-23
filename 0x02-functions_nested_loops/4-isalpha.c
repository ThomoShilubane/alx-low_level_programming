#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: parameter from main
 * Return: 1 if c is a letter, lower/upper case
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
