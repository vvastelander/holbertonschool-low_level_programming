#include "holberton.h"

/**
 *print_triangle - print triangle with @size size
 *@size: the size from parameter
 * Return: success
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= (size - i); j++)
{
_putchar(' ');
}
for (k = (size - i); k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
