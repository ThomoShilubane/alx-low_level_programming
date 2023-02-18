#include <stdio.h>

/**
 * main - print alphabets in reverse
 * Return: 0 Always
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);

	putchar('\n');

	return (0);
}
