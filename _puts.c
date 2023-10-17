#include "main.h"
#include <unistd.h>

/**
 * _puts - Print a string to stdout.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return i;
}
