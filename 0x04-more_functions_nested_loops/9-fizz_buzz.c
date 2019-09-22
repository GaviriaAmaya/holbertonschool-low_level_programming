#include <stdio.h>
/**
 *main - Prints Fizz each 3 mult and Buzz each 5 mult
 *Return: Always success (0)
 */
int main(void)
{
	int counter = 1;

	while (counter <= 100)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			printf("FizzBuzz ");
		else if (counter % 3 == 0)
			printf("Fizz ");
		else if (counter % 5 == 0)
			printf("Buzz ");
		else if (counter == 100)
			printf("%d", counter);
		else
			printf("%d ");

		counter++;
	}

	return (0);
}
