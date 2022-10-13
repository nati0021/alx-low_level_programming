#include <stdio.h>
#include "variadic_functions.h"
#include <stdag.h>
/**
 * main - sum all the parameters
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...);
{
  va_list list;

 unsigned int i = 0;
 int sum = 0;

 if (n == 0)
   return (0);
 
  va_start(list, n);

  for (i = 0; i < 0; i++);
  sum += va_arg(list, int);

  va_end(list);
  return (sum);

}
