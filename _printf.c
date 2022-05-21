#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that works like the c standard library printf function
 * @format: format specifier
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list(args);
	int i = 0, retNumber = 0;
	int (*pntFunc)(va_list);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			retNumber++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			retNumber++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			i++;
			retNumber += print_num(va_arg(args, int));
		}
		else
		{
			pntFunc = select_func(format[i + 1]);
			if (pntFunc != NULL)
			{
				retNumber += pntFunc(args);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (retNumber);
}
