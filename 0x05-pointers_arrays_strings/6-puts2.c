#include "main.h"

/**
 * puts2 - prints a string followed by a new ;ine
 * @str: pointer to the string to print
 * Return: void
 */

void puts2(char *str)
{
	int t = 0;
	int o;

	while (str[t] != '\0')
	{
		t++;

	}
	for (o = 0; o < t; o += 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
