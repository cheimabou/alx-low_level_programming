#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to the array
 * @size: size of the array(note that it is a square matrix)
*/
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int j = 0;
	int k = size - 1;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + j];
		s2 = s2 + a[i * size + k];
		j++;
		k--;
	}
	putchar(s1);
	putchar(", ");
	putchar(s2);
}
