#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Description: print alphabet
 * return: 0 (always)
 *
 */

void print_alphabet(void)
{
    for (char i = 'a', i <= 'z', i++)
    {
        _putchar('%d', i);
    }
    _putchar('\n');
    return 0;
}