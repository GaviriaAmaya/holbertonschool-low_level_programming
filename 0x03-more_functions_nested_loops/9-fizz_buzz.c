#include <stdio.h>
/**
 * main - Prints Fizz each 3 mult and Buzz each 5 mult
 *@f: Prints list of the numbers 1 to 100
 *
 *Return: Always success (0)
 */

int main(void)
{
int f;

 for (f = 0; f <= 100; f++)
   if ((f % 3) == 0 || (f % 5) == 0)
   {
     if ((f % 3) == 0)
   {
     printf("Fizz");
   }

     if ((f % 5) == 0)
       {
	 printf("Buzz");
       }
   }

   else
   {
   printf("%d ", f);
   }
putchar('\n');
return (0);
}

