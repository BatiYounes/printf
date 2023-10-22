#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int check_spec(const char *, va_list);
int print_mod(va_list);
int print_chr(va_list);
int print_str(va_list);
int print_dit(va_list);
int print_iit(va_list);
int dit_helper(int num);

/**
 * struct idn - identifiers and right func call
 * @id: first member
 * @f: second member
 */
typedef struct idn
{
	char *id;
	int (*f)(va_list);
} idn;

#endif /* MAIN_H */
