#include "main.h"

/**
 * Description: print alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10c(void)
{

	int i;
	for (i = 0; i <= 10; i++)
	{
		char letters;
		for (letters = 'a'; letters < 'z'; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');
	}
}
