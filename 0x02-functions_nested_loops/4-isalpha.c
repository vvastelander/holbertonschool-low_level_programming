#include "holberton.h"

/**
 *_isalpha - check if c is alpha
 *
 *@c: c is a letter
 *
 *
*Return: 1 or 0
 */
int _isalpha(int c)

{

if ((c <= 'Z' && c >= 'A')  || (c <= 'z' && c >= 'a'))
{
return (1);
}
else
{
return (0);
}
}
