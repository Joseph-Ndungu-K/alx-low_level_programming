#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * @c: the character to be checked
 * Return: on success 1 // 0
 */
int _islower(int c)
{
c = 0;
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
