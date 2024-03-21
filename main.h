#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);

typedef struct Formats
{
char type;
void (*func)(va_list args);
} formats;

int print_str(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int get_format(const char format_symbol, va_list args);

#endif
