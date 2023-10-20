#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _check_spec(char, va_list);

/**
 * struct idn - identifiers and right func call
 * @i: first member
 * @f: second member
 */
typedef struct idn
{
	char i;
	int (*f)(va_list);
} idn;

#endif /* MAIN_H */
