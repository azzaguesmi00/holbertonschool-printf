#include "main.h"
/**
 * _printdicimal - prints a decimal number
 * @p: va_list
 * Return: int
 */
int _printdicimal(va_list p)
{
	int size, div, va;
	unsigned int num;

	va = va_arg(p, int);
	size = 0;
	div = 1;
	if (va < 0)
	{
		size += _putchar('-');
		num = va * -1;
	}
	else
		num = va;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		size += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (size);
}
/**
 * _printpercent - prints '%'
 * @p: va_list
 * Return: 1
 */
int _printpercent(va_list p)
{
	int pers __attribute__((unused)) = va_arg(p, int);

	_putchar('%');
	return (1);
}
