#include "main.h"
/**
  * _printf - emulates the function printf
  * @format: pointer to string
  * Return: no.of chars printed
  */
int _printf(const char *format, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, format);

	int num_chars_printed = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
			num_chars_printed++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				num_chars_printed += print_char(args);
			}
			else if (format[i + 1] == 's')
			{
				num_chars_printed += print_string(args);
				num_chars_printed -= 2;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				num_chars_printed += print_int(args);
			}
			else if (format[i] == '%')
			{
				num_chars_printed += print_percent(args);
			}
			format[i++];
			num_chars_printed++;
		}
	}
	va_end(args);
	return (num_chars_printed);
}
