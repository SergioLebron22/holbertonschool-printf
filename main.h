#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

typedef struct Format
{
char t;
void (*f)(va_list args);
} flor;

int isFormat(const char * const format);
int _putchar(char c);

#endif
