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
int check_spec(const char *str, va_list args)
{
	idn idns[] = {
		{"%", print_mod},
		{"c", print_chr},
		{"s", print_str},
		{"d", print_dit},
		{"i", print_iit},
		{NULL, NULL}
	};
	int i, count;

	if (*(str) == '\0')
		return (-1);

	count = 0;
	i = 0;
	while (idns[i].id != NULL)
	{
		if (idns[i].id[0] == *(str))
		{
			count = idns[i].f(args);
			return (count);
		}

		i++;
	}

	return (count);
}
