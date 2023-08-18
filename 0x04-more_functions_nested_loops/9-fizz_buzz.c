#include <stdio.h>
/**
 * main - a program that  prints numbers from 1 to 100 but :
 *        if it is a multiple of 3 prints Fizz
 *        if it is a multiple of 5 prints Buzz
 *        if it is both prints FizzBuzz
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
			printf(" ");
			}
		}
		else
		{
			if (i % 5 == 0)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("%d", i);
				printf(" ");
			}
		}
	}
	printf("\n");
	return (0);
}