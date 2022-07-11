#include "main.h"

/**
 * _printf - a function that prints to the standard output, according
 * to a specified format.
 * @format: Any input string.
 * Return: NUmber of characters printed.
 */
int _printf(const char *format, ...)
{
	int output_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	output_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (output_chars);
}
