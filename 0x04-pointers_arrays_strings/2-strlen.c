#include "holberton.h"
/**
 *_strlen - Command that returns the length of a string
 *@s: String used
<<<<<<< HEAD
 *
 */
int _strlen(char *s)
{
	int n;
	n = 0;
	while (s == 0)
	{
		_putchar(n);
	}
=======
 *Return: Value of the counter n
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(n + s) != 0)

	{
		n++;
	}
	return (n);
>>>>>>> 5488d8af0bf62b1f17f1d9b9da5a81236351c2a3
}
