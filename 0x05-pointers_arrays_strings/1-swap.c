#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: the address of the first value
 * @b: the address of the second value
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
