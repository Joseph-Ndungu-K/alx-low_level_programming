#include "main.h"
/**
 * print_alphabet_x10 - prints 10times the lower alphabet
 * Result: (0)
 */
void print_alphabet_x10(void)
{
int b;
char a;
b = 1;
while (b <= 10)
{
a = ('a');
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
return;
}
