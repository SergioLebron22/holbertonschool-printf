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
 * Return: 1
 */


int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
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
/**
 * print_int - will print a number
 *
 * @args: int passed
 *
 * Return: digit length
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int abs_value, abs, len;
	unsigned int counter = 1;

	len = 0;

	if (n < 0)
	{
		len = len + _putchar('-');
		abs_value = n * -1;
	}
	else
		abs_value = n;

	abs = abs_value;

	while (abs > 9)
	{
		abs = abs / 10;
		counter = counter * 10;
	}

	while (counter >= 1)
	{
		len = len + _putchar(((abs_value / counter) % 10) + '0');
		counter = counter / 10;
	}
	return (len);
}


