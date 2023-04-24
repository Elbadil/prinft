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
