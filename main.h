#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - struture for _printf functions
 * @code: identifier
 * @f: pointer to a _printf's function
 *
 * Description: structure that stores pointer to
 * the _printf functions.
 */
typedef struct print
{
	char *code;
	int (*f)(va_list ap, char *buf, unsigned int ibuf);
} print_t;

int print_chr(va_list ap, char *buf, unsigned int ibuf);
int print_str(va_list ap, char *buf, unsigned int ibuf);
int print_mod(va_list ap, char *buf, unsigned int ibuf);
int print_unt(va_list ap, char *buf, unsigned int ibuf);
int print_hex(va_list ap, char *buf, unsigned int ibuf);
int print_upx(va_list ap, char *buf, unsigned int ibuf);

int _printf(const char *format, ...);
int _putchar(char c);
int _putbuf(const char *buf, unsigned int nbuf);
int write_to_buf(char *buf, char c, unsigned int ibuf);
int (*get_func(const char *, unsigned int))(va_list, char *, unsigned int);

#endif /* MAIN_H */
