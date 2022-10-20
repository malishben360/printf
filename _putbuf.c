#include "main.h"

/**
  * _putbuf - prints the buffer on the stdout stream
  * @buf: The buffer to be printed
  * @nbuf: The length of the buffer
  *
  * Return: The length of the printed buffer in bytes.
  */
int _putbuf(const char *buf, unsigned int nbuf)
{
	int n;

	n = write(1, buf, nbuf);
	return (n);
}
