#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int aux = 0;
	int i;

	while (s[aux] != '\0')
		aux++;
	for (i = 0; i < aux; i++)
	{
		aux--;
		rev = s[i];
		s[i] = s[aux];
		s[aux] = rev;
	}
}
