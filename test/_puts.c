#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to the standard output
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}

	return (length);
}
