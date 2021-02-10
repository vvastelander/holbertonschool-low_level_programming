
#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10times
 *Return: success
 */
void print_alphabet_x10(void)
{
int c;
char b;
for (c = 0; c < 10; c++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
