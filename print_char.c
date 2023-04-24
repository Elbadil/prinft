#include "main.h"
/**
 * print_char - print a character to stdout
 * @args: variadic parameter
 * Return: number of charater printed
*/
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(STDOUT_FILENO, &c, 1));
}
