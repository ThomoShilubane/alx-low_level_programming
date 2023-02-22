#include <stdio.h>

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 Always
 */

void print_alphabet(void)
{
	int a;

	for (a ='a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
