#include "main.h"
#include <stddef.h>

/**
 * select_func - select func based on character passed
 * @k: character passed
 * Return: function
 */

int (*select_func(char k))(va_list)
{
	if (k == 'c')
		return (print_char);
	if (k == 's')
		return (print_string);
	if (k == 'd')
		return (print_num);
	return (NULL);
}
