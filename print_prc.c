#include "main.h"
/**
 * print_cent - print a character % to stdout
 * @args: variadic parameter
 * Return: number of charater printed
*/
int print_cent(va_list args)
{
	int count;

	(void)args;
	count = write(1, "%", 1);
	return (count);
}
