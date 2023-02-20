#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 * Return: 0 Always
 */

int main(void)
{
	int a; /*Hundreds*/
	int b; /*Tens*/
	int c; /*Units*/

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '1'; c <= '9'; c++)
			{
				if ((a != b) && (b != c) && (a < b) && (b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
