#include "main.h"

/**
 * main - checks if the given character is lowercase
 * Return 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
