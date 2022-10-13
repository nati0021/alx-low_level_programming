#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * @...: other parameters
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
