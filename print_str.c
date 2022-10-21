#include "main.h"

/**
  * print_str - insert string in to the buffer given specifier s
  * @ap: array list of arguments passed
  * @buf: _printf buffer to store the formated string
  * @ibuf: ith index of the buffer to insert the characters
  *
  * Return: Alway the number of characters inserted.
  */
int print_str(va_list ap, char *buf, unsigned int ibuf)
{
	int i;
	char *str;
	char *emp = "(null)";

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		for (i = 0; emp[i] != '\0'; i++)
			write_to_buf(buf, emp[i], ibuf + i);
		return (i);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write_to_buf(buf, str[i], ibuf + i);
	}
	return (i);
}
