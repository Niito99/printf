#include "main.h"

/**
 * check_args - checks the next arg after %
 * @ch: a copy of the format str form _printf
 * Description: checks to see if the next char after %
 * is not a format specifier
 *
 * Return: 0
 */

int check_args(const char *ch)
{
	ch++;
	if (*ch == '\0')
		return (-1);
	else if (*ch == 'c')
		return (0);
	else if (*ch == 's')
		return (0);
	else if (*ch == '%')
		return (0);
	else if (*ch == 'd' || *ch == 'i')
		return (0);
	else
		return (-1);
	return (0);
}
