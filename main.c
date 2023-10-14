#include "main.h"

int main(void)
{
    int printed_chars;

    printed_chars = _printf("Hello, %s!\n", "world");
    _printf("Characters printed: %d\n", printed_chars);

    return (0);
}
