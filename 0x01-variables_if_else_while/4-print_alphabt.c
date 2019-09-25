#include <stdio.h>
/**
 * main - Prints the alphabet without 'e' and 'q'
 * Return: Always success (0)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 0; alphabet < 26; alphabet++)
	{
		if (alphabet == 4 || alphabet == 16)
	        {
			alphabet += 1;
			alphabet -= 1;
		}		
		else
		    putchar(alphabet + 97);
	}

	putchar('\n');

	return (0);
}
