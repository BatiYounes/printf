#include "main.h"

/**
<<<<<<< HEAD
 * print_binary - Print a binary number
 * @n: The binary number to print
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int n)
{
	int printed_chars = 0;
	char buffer[32]; /* Assuming a 32-bit integer */

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	int i = 0;
	while (n > 0)
	{
		buffer[i] = (n % 2) + '0';
		n = n / 2;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}

=======
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
>>>>>>> c32d8f8a63f7a1606d3ed31c5d3d25cf85a77d20
	return (printed_chars);
}
