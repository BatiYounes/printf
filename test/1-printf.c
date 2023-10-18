#include "main.h"

/**
 * _printif - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed.
 */
int _printif(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int i;

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(args, int);
				printed_chars += print_number(num);
			}
		}
	}
	va_end(args);
	return (printed_chars);
}

/**
 * print_number - Print a number
 * @n: The number to print
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	int printed_chars = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		printed_chars++;
	}

	if (n / 10)
	{
		printed_chars += print_number(n / 10);
	}

	_putchar((n % 10) + '0');
	printed_chars++;

	return (printed_chars);
}
