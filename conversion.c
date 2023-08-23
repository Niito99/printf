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

int convert3(va_list list)
{
	int d;

	d = va_arg(list, int);
	d = d + 48;
	write(1, d, 1);
	return (1);


}

