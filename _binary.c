#include "main.h"

/**
 * print_binary - Helper function to print a binary number.
 * @args: The argument list.
 * @printed_chars: The current count of printed characters.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args, int printed_chars)
{
    int n = va_arg(args, int);
    int i = 0;
    int bin[32];

    if (n == 0)
    {
        _putchar('0');
        printed_chars++;
    }
    else
    {
        while (n > 0)
        {
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }

        i--;

        while (i >= 0)
        {
            _putchar('0' + bin[i]);
            printed_chars++;
            i--;
        }
    }

    return (printed_chars);
}
