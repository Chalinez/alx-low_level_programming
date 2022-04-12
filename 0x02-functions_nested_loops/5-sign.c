#include "main.h"
/**
	*print-sign- return 0 not lowercase, 1 letter lowercase
	*
	*@n: int to be printed
	*Return: Always 0
	*/

int print_sign(int n)
{
if (n > 0)
{
	_putchar ('+');
	return (1);
}
else if (n == 0)
{
		_putchar ('0');
		return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
