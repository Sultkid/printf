#include "main.h"
/**
 * print_num - print numbers
 * @args: arg to be passed
 * Return: nn
 */
int print_num(va_list args)
{
	int n = va_arg(args, int), nn = 0;
	char lastDigit;
	int reversed;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = (char)('0' - (n % 10));
		n /= -10;
		nn++;
	}
	else
	{
		lastDigit = (char)((n % 10) + '0');
		n /= 10;
		nn++;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
		nn++;
	}
	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');

		_putchar(c);
		reversed /= 10;
		nn++;
	}
	_putchar(lastDigit);
	return (nn);
}
