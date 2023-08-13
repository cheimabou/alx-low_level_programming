#include <stdio.h>
/**
 * main - entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: always 0 (succesfull)
*/
int main (void)
{
	int i;
	char y;

	for (i = 0 ; i <= 9 ; i++)
		y = (char) i;
		printf(y);
	printf('\n');
	return (0);
}
