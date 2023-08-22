#include "main.h"
/**
 * print_array - a function that prints the elements on an array
 * @a: the pointer that points into the array
 * @n: the number of elements of the array
*/
void print_array(int *a, int n)
{
	int *p;
	int i;

	*p = a;
	for (i = 0; i < n; i++)
	{
		printf("%d", *p);
		printf(", ");
	}
	printf("\n");
}
