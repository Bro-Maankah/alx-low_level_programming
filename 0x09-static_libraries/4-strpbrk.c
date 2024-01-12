#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 * Return: A pointer to the character.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}

	return ('\0');
}
