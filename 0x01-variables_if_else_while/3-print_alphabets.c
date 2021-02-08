#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char q, w;
for (q = 'a'; q <= 'z'; q++)
putchar(q);
for (w = 'A'; w <= 'Z'; w++)
putchar(w);
putchar('\n');
return (0);
}
