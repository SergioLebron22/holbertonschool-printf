#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);

typedef struct Format
{
char t;
void (*f)(va_list args);
} format;

void print_str(va_list args);
void print_char(va_list args);
void print_percent(va_list args);

#endif
