#include "main.h"
/**
 * _isalpha - a function that checks a character if it is alphabet
 * @c: parametr of the function
 * Return: 1 if it is an alphabet otherwise 0
*/
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
