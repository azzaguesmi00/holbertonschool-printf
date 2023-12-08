#include "printf.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
	unsigned int i;
	va_list p;
	int x = 0;

	if (format == NULL)
		return (-1);

	va_start(p, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] != '%')
			x += _putchar(format[i]);
		else
		{
			if (format[i++] == '\0')
				return (-1);
			else 
			{
				if (get_func(format[i])!= NULL)
					x+=(*get_func(format[i]))(p);
				else{
					x+= _putchar('%');
					x+= _putchar(format[i]);}
			}
		}
		i++;
	}
	va_end(p);
	return(x);
}
