#include "main.h"
/**
  * print_char - prints single  characters
  * @args: va macro object
  * Return: no.of chars printed
  */
int print_char(va_list args)
{
	int char_count = 0;
	char c = (char) va_arg(args, int);

	my_putchar(c);
	char_count++;
	return (char_count);
}
/**
  * print_string - prints string
  * @args: macro object
  * Return: no. of chars printed
  */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int num_chars_printed = 0;

	while (*s != '\0')
	{
		my_putchar(*s);
		s++;
		num_chars_printed++;
	}
	return (num_chars_printed);
}
/**
  * print_percent - prints %
  * Return: no. of chars printed
  */
int print_percent()
{
	int count = 0;

	my_putchar('%');
	count++;
	return (count);
}
