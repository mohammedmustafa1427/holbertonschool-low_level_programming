#include "main.h"

/**
 * print_sign - check the number
 * @n: the character to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n lower than 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
