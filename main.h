#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define __putchar_
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int (*select_func(char k))(va_list);
int print_num(int n);

#endif
