// #ifndef VARFUNC
// #define VARFUNC
// #include <stdarg.h>
// int sum_them_all(const unsigned int n, ...);
// void print_numbers(const char *separator, const unsigned int n, ...);
// void print_strings(const char *separator, const unsigned int n, ...);
// void print_all(const char * const format, ...);
// /**
//  * struct typ - Struct operators
//  *
//  * @c: Char
//  * @tp: The function associated
//  */
// typedef struct typ
// {
// 	char *c;
// 	void (*tp)(va_list var);
// } typ_t;
// #endif


#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */