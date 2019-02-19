#include <stdio.h>
/**
*
*
*
*/

int main(void)
{
	int cont;

	for (cont = 0; cont <= 10; cont++)
	{
		int al;

		for (al = 97; al <= 122; al++)
		{
			putchar(al);
		}
		putchar ('\n');
	}
	return (0);
}
