#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function that runs a random number
 * and prints wether it's negative, zero or positive
 * more headers goes there
 * betty style doc for function main goes there
 * Return: 0 Always
 */
int main(void) /*Function that runs a random number*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0); /*Always*/
}
