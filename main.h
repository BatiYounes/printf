#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args, int printed_chars);
int print_string(va_list args, int printed_chars);
int _puts(char *str);
int _printif(const char *format, ...);
int print_number(int n);

#endif /* MAIN_H */
