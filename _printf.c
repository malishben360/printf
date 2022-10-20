#include "main.h"

/**
  * _printf - prints a formated string on the stdout stream
  * @format: Format to be used
  *
  * Return: Always the length of the formated string (Success)
  * else -1 (Failure).
  */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, ibuf = 0;
	va_list ap;
	char *buffer;
	int (*function)(va_list, char *, unsigned int);

	buffer = malloc(sizeof(char) * 1024), va_start(ap, format);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format[i] && format; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				_putbuf(buffer, ibuf), free(buffer), va_end(ap);
				return (-1);
			}
			else
			{
				function = get_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					write_to_buf(buffer, format[i], ibuf), len++, i--;
				}
				else
					len += function(ap, buffer, ibuf);
			}
			i++;
		}
		else
			write_to_buf(buffer, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	_putbuf(buffer, ibuf), free(buffer), va_end(ap);
	return (len);
}
