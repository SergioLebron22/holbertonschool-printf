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
	int counter = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str++);
		counter++;
	}
		return (counter);
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

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}




