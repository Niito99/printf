#include "main.h"

int convert1(va_list list)
{
	char c;
	int i;

	c = va_arg(list, int);
	i = write(1, &c, 1);
	return (i);

}

int convert2(va_list list)
{
	char *s;
	int len = 0;

	s = va_arg(list, char*);

	while (s[len] != '\0')
		len++;

	write(1, s, len);
	return(len);

	
}

int convert(void)
{
	int i;

	i = write(1, "%", 1);

	return (i);
}
