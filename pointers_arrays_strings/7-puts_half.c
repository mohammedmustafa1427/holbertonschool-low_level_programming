#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int full_len = 0;
	int start;

	while (str[full_len] != '\0')
	{
		full_len++;
	}

	if (full_len % 2 == 0)
	{
		start = full_len / 2;
	}
	else
	{
		start = (full_len + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
