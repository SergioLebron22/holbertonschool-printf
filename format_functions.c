#include "main.h"

/**
 * print_str - will print a string where %s is in printf
 *
 * @args: string passed
 *
 * Return: number of characters in string
 */

int print_str(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (str[i] == '\0')
		str = "(null)";

	for (i = 0; i != '\0'; i++)
		_putchar(va_arg(args, char *));
	return (i - 1);
}

/**
 * print_char - will print a character where %c is in printf
 *
 *@args: character passed
 *
 * Return: 0
 */


int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}

/**
 * print_percent - will print the character % where %% is in printf
 *
 * @args: format %%
 *
 * Return: 0
 */

int print_percent(va_list args)
{
	_putchar('%');
	return (0);
}




