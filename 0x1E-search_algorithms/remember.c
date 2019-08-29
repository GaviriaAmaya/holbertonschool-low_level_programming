#include <stdio.h>
/**
 * main - What the hell with pointers
 * Return: Always success 0
 */
int main(void)
{
	int n = 5;
	int *pointer;

/*	pointer = n;
	printf("What if I don't put *: %p", pointer);
	printf("What if I put *: %d", *pointer);*/

	pointer = &n;
	printf("What if I don't put *: %p\n", pointer);
	printf("What if I put *: %d\n", *pointer);
	return(0);
}
