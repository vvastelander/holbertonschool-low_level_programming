#include <stdio.h>
/**
 * main - entry point
 * prints 10 decimal numbers
 * Return: success
 */
int main(void)
{
int nu;
for(nu = 0; nu <= 99; nu++)
{

putchar((nu / 10) + '0');
putchar((nu % 10) + '0');
if (nu != 99)

{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
