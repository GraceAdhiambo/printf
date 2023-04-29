#include "main.h"
/**
  * _printf - emulates the function printf
  * @format: pointer to string
  * Return: no.of chars printed
  */
int _printf(const char *format, ...)
{
	unsigned int i;
	int num_chars_printed = 0;
	int char_count = 0;

	va_list args;

	va_start(args, format);

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
				char_count = print_char(args);
				i++;
				num_chars_printed += char_count;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				num_chars_printed += print_string(args);
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				i++;
				num_chars_printed += print_int(args);
			}
			else if (format[i] == '%')
			{
				i++;
				num_chars_printed += print_percent(args);
			}
		}
	}
	va_end(args);
	return (num_chars_printed);
}
