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
	return (0);
}
