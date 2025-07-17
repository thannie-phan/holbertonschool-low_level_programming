#ifndef variadic_functions_h
#define variadic_functions_h

/**
 * struct printer - Struct to match  format symbol with a print function
 * @symbol: symbol 'c', 'i', 'f', 's'
 * @print: Pointer to function that print
 */
struct printer
{
	char *symbol;
	void (*print)(va_list arg);

};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
