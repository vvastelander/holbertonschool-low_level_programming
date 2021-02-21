#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy - copy a string from source to destination
 *
 *@dest: destination
 *@src: source
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
