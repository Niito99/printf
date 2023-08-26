#include "main.h"

/**
 * convert_int - changes an integer to a string
 * @num: an integer
 * @str: a string
 * Return: length of string
 */

int convert_int (int num, char *str)
{
	int i = 0;
	int check_neg = 0;

	if (num < 0)
	{
		check_neg = 1;
		num = -num;
	}

	while (num)
	{
		int digit = num % 10;

		str[i++] = digit + '0';
		num = num / 10;
	}

	if (check_neg)
		str[i++] = '-';
	str[i++] = '\0';
	rev_str(str, i);

	return (i);
}

/**
 * rev_str-reveses a string
 * @str: a string
 * @len: an int
 * Return: no return value
 */

void rev_str(char *str, int len)
{
	int init;
	int fin;

	init = 0;
	fin = len - 1;

	while (init < fin)
	{
		char tmp = str[init];

		str[init] = str[fin];
		str[fin] = tmp;
		init++;
		fin--;
	}
}
