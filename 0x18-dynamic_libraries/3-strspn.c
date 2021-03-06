#include "holberton.h"
/**
 *_strspn - Compares strings and counts coincidences
 *@s: String comparer
 *@accept: String compared
 *Return: Depends on count in counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int plus1, plus2;
	int counter = 0;
	int onoff = 1;

	for (plus1 = 0; s[plus1] != '\0' && onoff == 1; plus1++)
	{
		onoff = 0;
		for (plus2 = 0; accept[plus2] != '\0'; plus2++)
		{
			if (s[plus1] == accept[plus2])
			{
				counter++;
				onoff = 1;
			}
		}
	}
	return (counter);
}
