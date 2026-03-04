#include "main.h"

/**
 * print_diagonal - drow a diagonal line in the terminal
 * @n: the number of time character _ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
