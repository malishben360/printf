#include "main.h"

/**
  * print_mod - inserts the character % in to the buffer given specifier %
  * @ap: array of arguments passed to _printf
  * @buf: the buffer to write to
  * @ibuf: ith index of the buffer to insert %
  *
  * Return: Always the length of characters inserted.
  */
int print_mod(va_list ap, char *buf, unsigned int ibuf)
{
	char c = '%';

	(void) ap;
	buf[ibuf] = c;
	return (1);
}
