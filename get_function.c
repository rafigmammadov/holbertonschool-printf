#include "main.h"
#include <stdio.h>

/**
 * get_function - Function that appropriately get correct function
 *
 * @ch: The parameter that represents specifier
 *
 * Return: Returns the function for the specifier, otherwise returns null
 *
 *
 */

int (*get_function(char ch))(va_list)
{
	int i = 0;

	ops operations[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; operations[i].spec != NULL; i++)
	{
		if (operations[i].spec[0] == ch)
			return (operations[i].f);
	}

	return (NULL);
}
