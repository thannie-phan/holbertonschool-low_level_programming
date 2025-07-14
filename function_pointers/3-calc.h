#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include "function_pointers.h"
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_subtract(int a, int b);
int op_multiply(int a, int b);
int op_divide(int a, int b);
int op_modulo(int a, int b);

#endif
