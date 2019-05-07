#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat -  function that concatenates two strings until n.
 *@dest: string to add the src string.
 *@src: string to be added to the dest string.
 *@n: Limit of the string to be printed
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0;

for (; dest[i] != '\0'; i++)
;
for (; src[k] != '\0'; k++)
{
if (k < n)
dest[i] = src[k];
i++;
}
return (dest);
}
