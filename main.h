#ifndef _MAIN_H
#define _MAIN_H

/* libraries */
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/* Prototypes */
int _printf(const char *format, ...);
int convert1(va_list list);
int convert2(va_list list);
int convert(void);
int convert3(va_list list);
int convert4(const char *format);
int check_args(const char *ch);
int convert_int(int num, char *str);
void rev_str(char *str, int len);


#endif
