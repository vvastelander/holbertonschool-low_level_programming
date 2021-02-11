#include "holberton.h"
#include "ctype.h"
/**
 * _isupper - main function
 *
 *@c: variable input
 *
 *Return: 1 or 0
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
