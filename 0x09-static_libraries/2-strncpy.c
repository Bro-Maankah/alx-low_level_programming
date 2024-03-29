#include "main.h"

/**
 * _strncpy - Copy a string.
 * @dest: Buffer to copy to.
 * @src: Source string.
 * @n: Number of characters to copy.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
