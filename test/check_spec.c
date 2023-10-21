#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * check_spec - checks if c is a specifier
 * @c: char argument
 * @args: variadic argument
 *
 * Return: returns how many character was printed
 */
int check_spec(char c, va_list args)
{
	idn idns[] = {
		{'%', print_mod},
		{'c', print_chr},
		{'s', print_str},
		{'d', print_dit},
		{'i', print_iit},
		{'\0', NULL}
	};
	int i, count;

	count = 0;
	i = 0;
	while (idns[i].id != '\0')
	{
		if (idns[i].id == c)
		{
			count = idns[i].f(args);
			return (count);
		}

		i++;
	}

	return (count);
}
