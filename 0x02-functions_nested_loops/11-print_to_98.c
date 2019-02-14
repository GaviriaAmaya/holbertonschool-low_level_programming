#include <stdio.h>
/**
 *print_to_98 - Prints in asc or desc to 98
 *@minor, @major: Variables that dets asc or desc order
 *@n: Number assigned to asc or desc
 *Returns Void
 */

void print_to_98(int n)
{

while (n < 98)
{
       printf("%d, ", n);
       n++;
}
while (n > 98)
{
	printf("%d, ", n);
	n--;
}
printf("%d", n);
putchar('\n');

}
