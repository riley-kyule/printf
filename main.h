#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;


typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);


int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);


char *convert(unsigned long int num, int base, int lowercase);


int _printf(const char *format, ...);


int (*get_print(char s))(va_list, flags_t *);


int get_flag(char s, flags_t *f);


int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);


int _putchar(char c);
int _puts(char *str);


int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
count += _putchar(s[i]);


int print_address(va_list l, flags_t *f);


int print_percent(va_list l, flags_t *f);

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif
