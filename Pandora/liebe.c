#include <stdio.h>
#include "reitero.h"
/**
 *recursive_je_t_aime - Function that prints a reiteration for a person
 *@liebe: String that matters
 *
 */
void recursive_je_t_aime(char *liebe)
{
	if (*(liebe) != '\0')
	{
		putchar (*liebe);
		recursive_je_t_aime(liebe + 1);
	}
	else
	putchar ('\n');
}
