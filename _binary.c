#include "main.h"

/**
 * print_binary - Helper function to print an unsigned integer in binary.
 * @args: The argument list.
 * @printed_chars: The current count of printed characters.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args, int printed_chars)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	int flag = 0;

	if (num == 0)
	{
		_putchar('0');
		return (printed_chars + 1);
	}

	for (i = 1 << 31; i > 0; i >>= 1)
	{
		if (num & i)
		{
			_putchar('1');
			flag = 1;
			printed_chars++;
		}
		else if (flag)
		{
			_putchar('0');
			printed_chars++;
		}
	}
	return (printed_chars);
}
