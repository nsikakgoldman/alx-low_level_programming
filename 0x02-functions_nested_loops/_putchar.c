#include <unistd.h>

/**
 * _putchar - print char
 * @c: char value
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
