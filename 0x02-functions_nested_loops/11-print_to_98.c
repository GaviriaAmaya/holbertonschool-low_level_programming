#include <stdio.h>
/**
 *print_to_98 - Prints in asc or desc to 98
 *@minor, @major: Variables that dets asc or desc order
 *@n: Number assigned to asc or desc
 *Returns Void
 */

void print_to_98(int n)
{
int minor, major;
for (minor = n, n < 98, n++)
{
printf('%d ,', n);

for (major = n, n > 98, n--)
{
printf('%d ,', n);

}
if (n == 98)
{
printf('%d\n', n);
}
}
}
