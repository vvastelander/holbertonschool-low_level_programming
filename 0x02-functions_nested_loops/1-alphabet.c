#include "holberton.h"
/**
 * print_alphabet - print alphabet using _putchar .
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
