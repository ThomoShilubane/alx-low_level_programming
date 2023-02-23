#include "main.h"

/**
 * _isupper - Checks for upppercase character.
 * @c: function parameter
 * Return: 1 for uppercase C and 0 for otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
