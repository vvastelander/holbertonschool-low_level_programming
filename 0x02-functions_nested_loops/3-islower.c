#include "holberton.h"

/**
 * _islower - check if lowercase
 *@c: char
 * Return: 0 or 1
 */
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
