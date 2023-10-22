#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function for writing output to the stdout
 * @format: an array of characters
 *
 * Return: returns the total number of printed char
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count, operation;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = 0;
	while (*(format))
	{
		if (*(format) == '%')
		{
			operation = check_spec((format + 1), args);
			if (operation > 0)
			{
				format += 2;
				count += operation;
			}
			if (operation == 0)
			{
				_putchar(*(format++));
				count++;
			}
			if (operation == -97)
				format += 2;
			if (operation == -1)
			{
				count += operation;
				format++;
			}
		}
		else
		{
			_putchar(*(format++));
			count++;
		}
	}
	va_end(args);
	return (count);
}
