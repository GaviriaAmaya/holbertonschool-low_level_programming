#include <stdio.h>

int main(void)
{
	unsigned int i = 128;
	unsigned int number = 5;

	for (i; i > 0; i >>= 1)
	{
		if (i & number)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return (0);
}
