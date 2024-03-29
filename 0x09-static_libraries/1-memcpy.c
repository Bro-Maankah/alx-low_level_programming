#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
	dest[index] = src[index];
	}
	return (dest);
}
