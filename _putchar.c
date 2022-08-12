#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 * Return: Success 1, on error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
