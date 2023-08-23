#include "main.h"
#include <stdio.h>

/**
 * _printf - prints to standard output
 * @format: takes in a character string
 * Description: It prints the format string after 
 * converstion throught the conv specifier
 * Return: character printed to std out 
 */

int _printf(const char *format, ...)
{
	va_list list;
	int value = 0;


	va_start(list, format);

	if (format == NULL)
		return (0);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			value++;
		}
		else 
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				value++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(list, int);
				write(1, &c, 1);
				value++;
			}

			else if (*format == 's')
			{
				
				char *s = va_arg(list, char*);
				int len = 0;

				while (s[len] != '\0')
					len++;

				write(1, s, len);
				value += len;
			}

		}
		format++;
	}
	va_end(list);

	return(value);
}
