#include "holberton.h"
/**
 *print_numbers - from 0 to 9
 *@n: 09
 *Return: num
 */
void print_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
_putchar (n);
}
_putchar ('\n');
return;
}
