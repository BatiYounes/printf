#include "main.h"

/**
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

	return (printed_chars);
}