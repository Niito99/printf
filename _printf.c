#include "main.h"

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
	int value;

	value = 0;
	va_start(list, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			value++;
		}
		else
		{
			const char *ch = format;
			value += check_args(ch);
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				value += convert();
			}
			else if (*format == 'c')
			{
				value += convert1(list);
			}

			else if (*format == 's')
			{
				value += convert2(list);
			}
			if (*format == 'd' || *format == 'i')
			{
				value += convert3(list);
			}

		}
		format++;
	va_end(list);
	}
	return (value);
}
