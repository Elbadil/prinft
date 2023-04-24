#include "main.h"
#include "main.h"
/**
 * check_format - to check format of a character
 * @format: format parameter
 * Return: pointer to a function
 */
int (*check_format(const char *format))(va_list)
{
	int i;

	func_t array[5] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}
	};

	for (i = 0; array[i].p != NULL; i++)
	{
		if (*(array[i].p) == *format)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}

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

/**
 * print_cent - print a character % to stdout
 * @args: variadic parameter
 * Return: number of charater printed
*/
int print_cent(va_list args)
{
	(void)args;
	return (write(STDOUT_FILENO, "%", 1));
}
