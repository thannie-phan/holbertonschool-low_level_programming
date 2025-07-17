#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct printer - Struct printer
 *
 * @symbol: The symbol shorten
 * @print: The function
 */
struct printer
{
	char *symbol;
	void (*print)(va_list arg);

};

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
