#include "main.h"

/**
 * _abs - check the absolute value
 * @n: the number to check
 *
 * Return: n if greater or equal to 0, -1 * n otherwise
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
