#include "main.h"
#include <stdarg.h>

/**
 * print_mod - prints the modulos character on the stdout
 * @args: variadic argument
 *
 * Return: returns number of characters printed
 */
int print_mod(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
