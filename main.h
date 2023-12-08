#ifndef PRINT_FUNC
#define PRINT_FUNC
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printstring(va_list p);
int _printchar(va_list p);
int _printinteger(va_list p);
int _printdicimal(va_list p);
int _printpercent(va_list p);

int (*get_func(char s))(va_list);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct om
{
	char op;
	int (*f)(va_list);
} om_t;

#endif
