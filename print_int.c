#include "main.h"
/**
 * print_integer - print integer to stdout
 * @args: variadic parameter
 * Return: number of integers
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0, rev = 0;

	if (n == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		count++;
	}
	if (n < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		count++;
		n = -n;
	}
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while (rev != 0)
	{
		char c = (char) (rev % 10 + '0');

		write(STDOUT_FILENO, &c, 1);
		count++;
		rev /= 10;
	}
	return (count);
}
