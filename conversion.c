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
	d = va_arg(list, int);

	write(1, &d, 1);
	return (1);


}

int check_args(const char *ch)
{

	ch++;
	if (*ch == '\0')
		return (-1);
	else
	{
		if (*ch == 'c')
		{
			return (0);
		}
		else if (*ch == 's')
		{
			return (0);
		}
		else if (*ch == '%')
		{
			return (0);
		}
		else
			return (-1);
	}
	return (0);

}
