#include <stdio.h>
void __attribute__ ((constructor)) turtle();
/**
 * turtle - Print berfore main function
 * Return: Void
 */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
