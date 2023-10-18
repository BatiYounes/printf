#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function to print formatted output.
 * @format: A string containing format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1); /* Print the character */
			printed_chars++;
		}
		else
		{
			format++; /* Move past the '%' */
			switch (*format)
			{
				case 'c':
					printed_chars += _putchar(va_arg(args, int));
					break;
				case 's':
					printed_chars += _puts(va_arg(args, char *));
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
