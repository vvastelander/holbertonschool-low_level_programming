#include <stdio.h>
/**
 * main - entry point
 * prints 10 decimal numbers
 * Return: success
 */
int main(void)
{
int nu;
for (nu = 00; nu < 100; nu++)
{
if (nu != 100)
putchar((nu / 10) + '0');
putchar((nu % 10) + '0');
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
