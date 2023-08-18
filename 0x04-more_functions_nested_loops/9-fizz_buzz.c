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
			printf(" ");
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
		{
			if (i % 5 == 0)
			{
				printf(" ");
				printf("Buzz");
			}
			else
			{
				printf(" ");
				printf("%d", i);
			}
		}
	}
	printf("\n");
}
