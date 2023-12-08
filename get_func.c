#include <stdarg.h>
#include "main.h"
/**
 * get_func - check the code#include <
 * @s: char
 * Return: int
 */
int (*get_func(char s))(va_list)
{
	om_t ops[] = {
		{'d', _printdicimal},
		{'c', _printchar},
		{'s', _printstring},
		{'i', _printinteger},
		{'%', _printpercent}};

	int i;

	i = 0;
	while (i < 5)
	{
		if ((ops[i].op) == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
