#include <stdio.h>
/**
 * main - entry point
 * prints 10 decimal numbers
 * Return: success
 */
int main(void)
{
int gg;
for (gg = '0'; gg <= '9' ; gg++)
{
putchar (gg);
if (gg != '9')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
