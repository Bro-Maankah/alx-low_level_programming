#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Buffer where the concatenated string will be stored.
 * @src: Source string to be appended to dest.
 * @n: Maximum number of bytes to be appended.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	/* Find the end of dest string*/
	while (dest[a] != '\0')
	{
	a++;
	}

	/* Append n characters of src to dest*/
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	/* Null-terminate dest*/
	dest[a] = '\0';

	return (dest);
}
