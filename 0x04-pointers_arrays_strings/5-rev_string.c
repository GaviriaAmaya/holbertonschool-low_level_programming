#include "holberton.h"
/**
 * rev_string - Reverse a string without print it
 * @s: Pointer to the adress of the string
 *
 *Return: Void
 */

void rev_string(char *s)
{  
	int len = 0;
	int itc = 0;
	int rev;

	while (s[len] != '\0')
	len++;

	while (len >= 0)
        {
	rev[itc] = s[len];
	itc++;
	len--;
	}
	
	rev[itc + 1];
	  _putchar('\0');
}
