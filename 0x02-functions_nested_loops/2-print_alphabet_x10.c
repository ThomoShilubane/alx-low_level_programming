#include "main.h"

/**
 * main - Prints 10 times the alphabet
 * in lower case,followed by a new line
 * Return: 0 always\
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
