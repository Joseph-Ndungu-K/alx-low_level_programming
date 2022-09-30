#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @j: integer whose absolute value is to be computed
 * Return: absolute value of integer
 */
int _abs(int j)
{
if (j > 0)
return (j);
else if (j < 0)
return (-j);
else
return (0);
}
