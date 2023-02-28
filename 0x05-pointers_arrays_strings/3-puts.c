#include "main.h"

/**
 * _puts - pritnts a string, followed by a new line
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
