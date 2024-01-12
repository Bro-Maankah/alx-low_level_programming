#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b: The desired value.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; n > 0; a++, n--)
	{
	s[a] = b;
	}

	return (s);
}
