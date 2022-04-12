#include "main.h"
/**
	*_isalpha- return 1 if c is a letter. Lowercase and uppercase
	*@c: the int to be printed
	*Return: always 0
	*/

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
	return (1);
}

else
{
	return (0);
}

}
