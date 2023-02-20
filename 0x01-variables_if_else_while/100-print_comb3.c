#include <stdio.h>

/**
 * main - Prints all combinations of two numbers
 * Return: 0 Always
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if ((a != b) && (a < b))
			{
				putchar(a);
				putchar(b);
				if (!(a == '8' && b == '9'))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
