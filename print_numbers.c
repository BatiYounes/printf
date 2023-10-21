#include "main.h"
#include <stdarg.h>

/**
 * dit_helper - helper function to print_diit
 * @num: integer argument
 *
 * Return: returns number of integers printed
 */
int dit_helper(int num)
{
	static int count;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	count = 0;
	if (num / 10)
		dit_helper(num / 10);

	_putchar(num % 10 + '0');
	count++;
	return (count);
}

/**
 * print_dit - prints decimal integer on the stdout
 * @args: variadic argument
 *
 * Return: returns number of characters printed
 */
int print_dit(va_list args)
{
	int num;

	num = va_arg(args, int);

	return (dit_helper(num));
}

/**
 * print_iit - prints any format of integers
 * @args: variadic argument
 *
 * Return: returns number of characters printed
 */
int print_iit(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (num);
}
