#include "main.h"

/**
 * print_string is used to loop through a string and prints every character
 * ...l: va_list arguments from _printf
 * ...f: pointer to the struct flags that determines whether a flag is passed to _printf
 * Return: number of characters printed
 */
int print_string(va_list l, flags *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char is used to print a character.
 * ...l: va_list arguments from _printf
 * ...f: pointer to the struct flags that determines whether a flag is passed to _printf
 * Return: number of characters printed
 */
int print_char(va_list l, flags *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
