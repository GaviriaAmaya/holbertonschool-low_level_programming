#include <stdio.h>
/**
 *main - Function that prints the name of the function
 *@argc: Number of aguments of the main function
 *@argv: String that saves every argument
 *
 *Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	while (counter < argc)
	{
	printf("%s\n", argv[counter]);
	counter++;
	}
	return (0);
}
