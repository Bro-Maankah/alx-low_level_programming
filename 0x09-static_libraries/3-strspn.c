#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: Main string.
 * @accept: Substring of accepted characters.
 *
 * Return: Number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
	if (*s == accept[r])
	{
		n++;
		break;
	}
	else if (accept[r + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}
