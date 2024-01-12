#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Buffer where the concatenated string will be stored.
 * @src: Source string to be appended to dest.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	while (src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';
	return (dest);
}
