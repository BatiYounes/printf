#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_chr - prints the character on the stdout
 * @args: variadic argument
 *
 * Return: returns number of characters printed
 */
int print_chr(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - prints the strings on the stdout
 * @args: variadic argument
 *
 * Return: returns number of characters printed
 */
int print_str(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	if (i == 0)
		i = -97;

	return (i);
}
