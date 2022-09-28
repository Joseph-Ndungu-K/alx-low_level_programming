#include "main.h"
#define NULL 0

/**
 * _strstr - function locates a substring
 * @haystack: string being checked
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				needle = &needle[0];
				return (needle);
			}
		}
	i++;
	}
	return (NULL);
}
