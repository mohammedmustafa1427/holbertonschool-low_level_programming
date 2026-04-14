#include "main.h"
/**
 * _strncat - concatenates two strings useing at most n byets from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum amount of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
