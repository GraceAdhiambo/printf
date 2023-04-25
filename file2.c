#include "main.h"

/**
 * print_int - prints an integer to the standard output
 * @args: a va_list of the arguments
 *
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	char buffer[12];
	int buffer_index = sizeof(buffer) - 1;
	int num_chars_printed = 0;

	buffer[buffer_index] = '\0';

	if (n < 0)
	{
		my_putchar('-');
		num_chars_printed++;
		n = -n;
	}

	do
	{
		buffer[--buffer_index] = '0' + (n % 10);
		n /= 10;
	} while (n != 0);

	while (buffer[buffer_index] != '\0') 
	{
		my_putchar(buffer[buffer_index]);
		num_chars_printed++;
		buffer_index++;
	}

	return num_chars_printed;
}
