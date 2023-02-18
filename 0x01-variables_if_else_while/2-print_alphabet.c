#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *Return: 0
 */

int main(void)
{
	char lwc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
	{
		putchar(lwc);
	}
	putchar('\n');
	return (0);
}
