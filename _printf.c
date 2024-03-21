#include "main.h"

/**
 * _printf - This function print.
 *
 * @format: string being printed
 *
 *
 * Return: the lenght in string
 *
 */

int _printf(const char *format, ...)

{
	va_list argo;
	int i = 0, count = 0;

	va_start(argo, format);
	if (format == NULL)
	{
		return (-1);

	while(format[i] != '\0')
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] =='\0')

			}
			count += get_format(format[i], argo);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

