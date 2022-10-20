#include "main.h"

/**
  * write_to_buf - insert a character into the buffer at ith index
  * @buf: The buffer to be updated
  * @c: The character to be inserted
  * @ibuf: The ith index of the buffer
  *
  * Return: Index of the next character.
  */
int write_to_buf(char *buf, char c, unsigned int ibuf)
{
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
