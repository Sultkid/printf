#include <stdio.h>
#include "../main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 0;
	printf("welcome to %c programming %c nice %s boy test %% guy\n", 'a', 'b', "good");
	n = printf("welcome to %c programming %c nice %s boy test %% guy\n", 'a', 'b', "good");
	printf("%d\n", n);
	_printf("welcome to %c programming %c nice %s boy test %% guy\n", 'a', 'b', "good");
	n = _printf("welcome to %c programming %c nice %s boy test %% guy\n", 'a', 'b', "good");
	printf("%d\n", n);
	n = _printf("%%\n");
	printf("%d\n", n);
	n = printf("%%\n");
	printf("%d\n", n);
	printf("%d\n", 500000);
	_printf("%d\n", 500000);
	n = printf("%d\n", 2500000);
	printf("%d\n", n);
	n = _printf("%d\n", 2500000);
	_printf("%d\n", n);
	return (0);
}
