#include <unistd.h>

/**
 * _putchar - prints character on the stdout
 * @c: character argument
 *
 * Return: returns 1(success) otherwise -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
