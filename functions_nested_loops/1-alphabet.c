#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Description: print alphabet
 * return: 0 (always)
 *
 */

int print_alphabet(void)
{
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
    return 0;
}