#include "holberton.h"
/**
 *print_numbers - from 0 to 9
 *
 *Return: num
 */
void print_numbers(void)
{
int k;
for (k = '0'; k <= '9'; k++)
{
_putchar (k);
}
_putchar ('\n');
return;
}
