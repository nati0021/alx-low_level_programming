#include "main.h"
/**
* _memset - fills the memory with a constnt byte
* @s: input character pointer
* @b: input character
* @n: unsigned integer input
* Return: the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *beg = s;

	while (n--)
	{
		*s = b;

		s++;
	}
	return (beg);
}
