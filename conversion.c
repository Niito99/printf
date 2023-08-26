#include "main.h"
/**
 * convert1 - handles the char conversion specifier
 * @list: a variadic function macro
 * Return: the amount of byte written to std out
 */

int convert1(va_list list)
{
	char c;
	int i;

	c = va_arg(list, int);
	i = write(1, &c, 1);
	return (i);

}
/**
 * convert2 - handles the string conversion specifier
 * @list: a variadic funciton macro
 * Return: the amount of byte written to std out
 */

int convert2(va_list list)
{
	char *s;
	int len = 0;

	s = va_arg(list, char*);

	if (s == (char *)0)
	{
		write(1, "(null)", len + 6);
		return (6);
	}

	while (s[len] != '\0')
		len++;

	write(1, s, len);
	return (len);
}
/**
 * convert - prints % to std out
 *
 * Return: 1
 */

int convert(void)
{
	int i;

	i = write(1, "%", 1);

	return (i);
}

/**
 * convert3 - handles the conversion for the specifier d
 * @list: a variadic funtion macro that holds all the
 * additional arguments to the _printf function
 * Return: the number of bytes output to std out
 */
int convert3(va_list list)
{
	int d;
	int i;
	char *ch;

	ch = malloc(20);

	d = va_arg(list, int);
	i = convert_int(d, ch);
	write(1, ch, i);
	free(ch);
	
	return (i);


}
/**
 * convert4 - handles special conversion for %char
 * @format: takes in the string format from _printf
 * Return: the number of bytes written to stdout plus 1
 */

int convert4(const char *format)
{
	int i;

	i = write(1, "%", 1);
	i += write(1, format, 1);
	return (i + 1);
}
