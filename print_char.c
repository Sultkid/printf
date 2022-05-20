#include "main.h"
#include <stdarg.h>
/**
 * print_char - print character
 * @args: member
 * Return: 1 (success)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
