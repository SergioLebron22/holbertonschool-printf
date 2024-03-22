#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct Formats - Formats
 *
 * @type: type of format
 * @func: function pointer
 *
 * Description: structure containing formating for printf
 */

typedef struct Formats
{
char *type;
int (*func)(va_list args);
} formats;

int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int get_format(const char format_symbol, va_list args);
int print_int(va_list args);

#endif
