#include <stdio.h>
/**
 *
 *
 *
 */

int main(void)
{
	int n1, n2, c1;

	for (c1 = 0; c1 <= 99; c1++)
	{
		for (n1 = 0; n1 < c1; n1++)
		{
			for (n2 = 0; n2 < c1; n2++)
			{
				int res = ((n1-1)+(n2-2));
				printf ("%d", res);
			}
		}
		putchar ('\n');
	}
}
