#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to string to be copied to
 * @src: pointer to string to be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
