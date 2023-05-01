#include "main.h"
/**
  *print_binary - prints unsigned no.
  * @args: macro object
  * Return: no.of characters prinyed
  */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[33];
	int buf_idx = 0;
	int char_count = 0;

	do {
		buffer[buf_idx] = (n % 2) + '0';
		buf_idx++;
		n /= 2;
	} while (n > 0);

	while (buf_idx > 0)
	{
		buf_idx--;
		my_putchar(buffer[buf_idx]);
		char_count++;
	}
	return (char_count);
}
