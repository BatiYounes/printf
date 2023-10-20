#include "main.h"
#include <stdarg.h>

/**
 * print_char - Helper function to print a character.
 * @args: The argument list.
 * @printed_chars: The current count of printed characters.
 *
 * Return: The number of characters printed (always 1).
 */
int print_char(va_list args, int printed_chars)
{
	char c = va_arg(args, int);
	_putchar(c);

	return (printed_chars + 1);
}

/**
 * print_string - Helper function to print a string.
 * @args: The argument list.
 * @printed_chars: The current count of printed characters.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args, int printed_chars)
{
	char *str = va_arg(args, char *);
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		printed_chars++;
		i++;
	}
	return (printed_chars);
}
