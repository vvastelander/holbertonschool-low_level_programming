#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *Return: 0
 */
int main(void)
{
char QE;
for (QE = 'a'; QE <= 'z'; QE++)
if ((QE != 'q') && (QE != 'e'))
putchar(QE);
putchar('\n');
return (0);
}
