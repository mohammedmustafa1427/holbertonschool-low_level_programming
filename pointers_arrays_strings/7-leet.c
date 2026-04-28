#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
