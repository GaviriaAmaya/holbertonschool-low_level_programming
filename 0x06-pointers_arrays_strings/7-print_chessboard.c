#include "holberton.h"
/**
 *print_chessboard - Prints a chessboard according to... The initials?
 *@a: Pointer to a char type variable
 *
 *Return: None
 */
void print_chessboard(char (*a)[8])
{
int count1;
int count2;

	for (count1 = 0; count1 < 8; count1++)
	{
		for (count2 = 0; count2 < 8; count2++)
		{
			_putchar(a[count1][count2]);
		}
	_putchar('\n');
	}
}
