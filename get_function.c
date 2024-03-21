#include "main.h"

int get_format(const char format_symbol, va_list args)
{
	formats f_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL},
	};
	int i;

	for (i = 0; f_array[i].type != NULL; i++)
	{
		if (format_symbol == f_array[i].type[0])
			return (f_array[i].func(args));
	}

	_putchar('%');
	_putchar(format_symbol);
	return (2);
}
