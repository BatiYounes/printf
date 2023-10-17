#include "main.h"
#include <stdarg.h>

/**
 * _printif - Custom printf function to handle %d and %i format specifiers
 * @format: A string containing the format to print.
 * @...: The variable arguments to replace format specifiers.
 *
 * Return: The number of characters printed.
 */
int _printif(const char *format, ...) {
	va_list args;
	int printed_chars = 0;
	int n;

	va_start(args, format);

	while (*format) {
		if (*format == '%') {
			format++;
			if (*format == 'd' || *format == 'i') {
				n = va_arg(args, int);
				if (n < 0) {
					_putchar('-');
					printed_chars++;
					n = -n;
				}
				printed_chars += print_number(n);
			} else {
				_putchar('%');
				printed_chars++;
			}
		} else {
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}

/**
 * print_number - Print an integer number
 * @n: The integer to print.
 *
 * Return: The number of digits printed.
 */
int print_number(int n) {
	int digits = 0;

	if (n == 0) {
		_putchar('0');
		return (1);
	}
	if (n < 0) {
		n = -n;
	}

	while (n > 0) {
		_putchar(n % 10 + '0');
		n /= 10;
		digits++;
	}

	return (digits);
}
