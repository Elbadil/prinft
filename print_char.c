#include "main.h"
/**
 * print_char - print a character to stdout
 * @args: variadic parameter
 * Return: number of charater printed
*/
int print_char(va_list args)
{
	int count;
	char c;

	c = va_arg(args, int);
	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
