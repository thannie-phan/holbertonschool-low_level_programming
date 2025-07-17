#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @t: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *t;
	void (*f)(va_list *list);
} op_t;

void print_char(va_list *list);
void print_int(va_list *list);
void print_float(va_list *list);
void print_string(va_list *list);

#endif
