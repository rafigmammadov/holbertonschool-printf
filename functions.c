#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - Function that prints character
 *
 * @args: The parameter that represents arguments of variadic function
 *
 * Return: Returns the number of the character printed
 *
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}


/**
 * print_string - Function that prints string
 *
 * @args: The parameter that represents arguments of variadic function
 *
 * Return: Returns the count of printed characters
 *
 *
 */

int print_string(va_list args)
{
	int count = 0;

	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		count += write(1, str++, 1);
	}

	return (count);
}

/**
 * print_percent - Function that prints percentage
 *
 * @args: The parameter that represents arguments of variadic function
 *
 * Return: Returns the percent sign
 *
 *
 */

int print_percent(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}
