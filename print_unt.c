#include "main.h"

/**
  * print_unt - prints on unsigned int
  * @ap: number to print
  * @buf: buffer pointer
  * @ibuf: index for buffer pointer
  * Return: number of chars printed.
  */
int print_unt(va_list ap, char *buf, unsigned int ibuf)
{
	unsigned int int_in, int_temp, i, div;

	int_in = va_arg(ap, unsigned int);
	int_temp = int_in;
	div = i;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = write_to_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i);
}
