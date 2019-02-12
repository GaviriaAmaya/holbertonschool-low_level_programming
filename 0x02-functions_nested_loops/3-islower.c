#include <ctype.h>
#include "holberton.h"

int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
_putchar('\n');
return (0);
}
