#include "main.h"

/**
 * _islower - checks if the given character is lowercase
 * @c: parameter to be printed
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
