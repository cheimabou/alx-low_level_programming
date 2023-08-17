#include 'main.h'
/**
 * _isupper - a function that checks for uppercase letters
 * @c: parameter of the function
 * Return: 1 if it is true
 *         otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
