#include "main.h"

/**
  * get_func - selects the right function for the operation
  * @s: format
  * @is: the index of the spicifier
  *
  * Return: Pointer to a _printf's function.
  */
int (*get_func(const char *s, unsigned int is))(va_list, char *, unsigned int)
{
	print_t functions[] = {
		{"c", &print_chr},
		{"s", &print_str},
		{"%", &print_mod},
		{NULL, NULL}
		 };
	int i = 0;

	while (functions[i].code != NULL)
	{
		if ((functions[i].code)[0] == s[is])
			break;
		i++;
	}
	return (functions[i].f);
}
