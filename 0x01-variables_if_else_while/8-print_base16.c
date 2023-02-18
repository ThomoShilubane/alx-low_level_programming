#include <stdio.h>

/**
 * main - Print the numbers in base 16
 * Return: 0 Always
 */

int main(void)
{
	int num;
	int le;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (le = 'a'; le <= 'f'; le++)
		putchar(le);

	putchar('\n');

	return (0);
}
