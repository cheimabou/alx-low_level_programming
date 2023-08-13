#include <stdio.h>
/**
 * main - entry point
 * a c program that prints with putchar function lowercases then uppercases
 * Return: always 0 (successful)
*/
int main(void)
{
	char low;
	char upp;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	for (upp = 'A' ; upp <= 'Z' ; upp++)
		putchar(upp);
	putchar('\n');
	return (0);
}
