#include "main.h"
/**
 * _isdigit - a function that checks if a character is a digit
 * @c: parameter of the function
 * Return: 1 if it is true
 *         else returns 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
