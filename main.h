#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

typedef struct Format
{
char t;
void (*f)(va_list args);
} format;

int isFormat(const char * const format);
#endif
