B#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *Return: 0
 */
int main(void)
{
int aa;
char ss;
for (aa = 0; aa <= 9; aa++)
putchar(aa + '0');
for (ss = 'a'; ss <= 'f'; ss++)

putchar(ss);
putchar('\n');
return (0);
}
