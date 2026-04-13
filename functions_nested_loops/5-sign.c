#include "main.h"

/**
 * print_sign - check the number
 * @n: the character to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n lower than 0
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
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
