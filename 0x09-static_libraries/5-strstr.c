#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to be scanned.
 * @needle: The small string to be searched within haystack string.
 * Return: A pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *l = haystack;
	char *p = needle;

	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}

	if (*p == '\0')
	return (haystack);
	}

	return (0);
}
