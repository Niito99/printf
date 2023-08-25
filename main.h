#ifndef _MAIN_H
#define _MAIN_H

/* libraries */
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

/* Prototypes */
int _printf(const char *format, ...);
int convert1(va_list list);
int convert2(va_list list);
int convert();
int convert3(va_list list);
int check_args(const char *ch);


#endif
