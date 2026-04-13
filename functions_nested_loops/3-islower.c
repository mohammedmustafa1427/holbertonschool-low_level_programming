#include "main.h"

/**
 * _islower - checks the lowercase character
 *
 * @c: the character to check
 * return: 1 if lower case, 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
