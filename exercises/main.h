#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/*Structure*/

/**
 *
 *
 */
typedef struct operation
{
	int (*function_add)(int n, ...);
	int (*function_sub)(int n, ...);
	int (*function_mul)(int n, ...);
	int (*function_div)(int n, ...);

} operation;

#endif
