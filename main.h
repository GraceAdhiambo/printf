#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int my_putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();
int _printf(const char *format, ...);
int print_int(va_list args);
#endif
