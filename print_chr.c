#include "main.h"

/**
  * print_chr - write a character to the buffer given s specifier
  * @ap: array of arguments passed
  * @buf: _printf buffer to store the character
  * @ibuf: ithe index of buffer where character is to be stored
  *
  * Return: Always the index where character is stored.
  */
int print_chr(va_list ap, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(ap, int);
	buf[ibuf] = c;
	return (1);
}
