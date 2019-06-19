#include "holberton.h"
/**
 * rev_string - Reverse a string without print it
 * @s: Pointer to the adress of the string
 *
 *Return: Void
 */

void rev_string(char *s)
<<<<<<< HEAD
{
	int i = 0, j;

	while(s[i])
	{
		i++;
		j = i;
	}
	while(s[j] >= 0)
		j--;
	/*for (i = 0; s[i] != '\0'; i++)
	{
		j = i;
		j--;
		}*/
	/*j = i;

	while (s[j] > 0)
	j--; */
=======
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
>>>>>>> c12b7c66e263a5a400ec58f862c5582f27f503de
}
