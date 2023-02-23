#include "main.h"

/**
 * main - Prints first 50 numbers of fibonacci
 * Return: 0 
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int sum;

	_putchar(a);
	_putchar(',');
	_putchar(' ');
	_putchar(b);

	for (c = 0; c < 48; c++)
	{
		sum = a + b;
		_putchar(sum);
