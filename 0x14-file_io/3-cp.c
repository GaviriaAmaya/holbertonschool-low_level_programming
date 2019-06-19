#include "holberton.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 *
 *
 *
 *
 */
int copy(int ac, char *av)
{


	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
=======
 *copy - Copy the content of a file to another
 *@ac: 
 *@av: 
 *Return: 0 (Always success)
 */
int copy(int ac, char *av)
{
	int src, dest;
	char buffer[1024];

	if (ac != 3)
	{
>>>>>>> c12b7c66e263a5a400ec58f862c5582f27f503de

}
