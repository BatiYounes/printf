#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function to print formatted output.
 * @format: A string containing format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int printed_chars = 0;

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed_chars += print_char(args, printed_chars);
					break;
				case 's':
					printed_chars += print_string(args, printed_chars);
					break;
				case '%':
					_putchar('%');
					printed_chars++;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
