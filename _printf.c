#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
<<<<<<< HEAD
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'b')
				printed_chars += print_binary(va_arg(args, unsigned int));
			else
			{
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
=======
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
>>>>>>> c32d8f8a63f7a1606d3ed31c5d3d25cf85a77d20
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
