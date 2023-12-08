#include "printf.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printstring - print a string
 * @p: va_list
 * Return: int
 */
int _printstring(va_list p){
    char *str;
    int i,n = 0;

    str = va_arg(p,char*);

    if (str == NULL)
        str = "(null)";

    for (i=0;str[i] != '\0';i++)
        n += _putchar(str[i]);
    return(n);
}
/**
 * _printchar - prints a character
 * @p: va_list
 * Return: 1
 */
int _printchar(va_list p){
    return(_putchar(va_arg(p,int))); 
}
/**
 * _printinteger - prints an integer
 * @p: va_list
 * Return: int
 */
int _printinteger(va_list p){
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
 * _printdicimal - prints a decimal number
 * @p: va_list
 * Return: int
 */
int _printdicimal(va_list p){
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
int _printpercent( va_list p){
    int pers __attribute__((unused)) = va_arg(p,int);
    _putchar('%');
    return(1);
}