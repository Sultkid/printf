#include "main.h"
#include <stdarg.h>

/**
 * print_string - print string
 * @args: string to print
 * Return: 1 (success)
 */

int print_string(va_list args)
{
	int sn = 0, nn = 0;
	char *s = va_arg(args, char *);

	while (s[sn] != '\0')
	{
		_putchar(s[sn]);
		sn++;
		nn++;
	}
	return (nn);
}
