#include "main.h"
/**
 * print_str - print a string to stdout
 * @args: variadic parameter
 * Return: number of charater printed
*/
int print_str(va_list args)
{
	char *s;
	int len = 0;

	s = va_arg(args, char*);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[len] != '\0')
	{
		write(STDOUT_FILENO, &s[len], 1);
		len++;
	}
	return (len);
}
