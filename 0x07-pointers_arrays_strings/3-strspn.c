#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: memory whose prefix length is being determined
 * @accept: memory whose bytes are being checked
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len1;
	int len2;
	int initial_length;

	initial_length = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	len1 = i;
	for (j = 0; accept[i] != '\0'; j++)
		;
	len2 = j;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] != accept[j])
				continue;
			else
				break;
		}
		initial_length++;

	}
	return (initial_length);
}
		
