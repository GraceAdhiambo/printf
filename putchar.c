#include <unistd.h>
/**
 * my_putchar - emulates putchar function
 * @c: character to be printed
 * Return: value at &c
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}
