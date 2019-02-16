#include "holberton.h"
/**
 * print_diagonal - Prints \ character with spaces in order
 * @n: Variable that means the counter
 *
 * Return Success
 */

void print_diagonal(int n)

{
  int clm, rws;

  if (n <= 0)
    _putchar('\n');
    
      for (rws = 0; rws < n; rws++)
	{
	  for (clm = 0; clm < n; clm++)
	    {
	    
	      if (clm == rws)
		{
		_putchar(92);
		_putchar('\n');
		}
	    
	  else
	    {
	      if (clm < rws)
		_putchar(32);
	      }
	    }
	}
}
