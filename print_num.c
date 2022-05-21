#include "main.h"
/**
 * print_num - print numbers
 * @n: arg to be passed
 * Return: nn
 */
int print_num(int n)
{
	int nn = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		++nn;
	}

	if (n / 10)
	{
		print_num(n / 10);
	
	}
	++nn;
	_putchar((n % 10) + '0');
	return (nn);
}
