#include "main.c"

/**
 *print_numbers - print numbers
 *
 *
 *Return:0
 *
 */

void print_numbers(void)
{

  char n =0;

  while (n <= 9)
    {
      _putchar("%d",  n);
       n++;
    }
_putchar('\n');
}