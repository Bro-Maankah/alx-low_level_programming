#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
