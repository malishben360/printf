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
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _putchar(char c);
int _print(const char *format, ...);

#endif /* MAIN_H */
