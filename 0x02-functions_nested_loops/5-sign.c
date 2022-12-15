#include "main.h"
/**
 * print_sign - print the signs of numbers
 * @n: the integer to check
 * Return: 1 and prints + if n is greater than zero
 * o and prints 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
