#include "main.h"

/**
 * _strcpy - function copies the string copied to by
 * src including '\0' to the buffer pointed to by dest
 * @dest: pointer to buffer to be pasted to
 * @src: pointer to string being copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
