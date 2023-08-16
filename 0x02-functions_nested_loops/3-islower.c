#include "main.h"
/**
 * _islower - checks if a charecter is lowercase or not
 * @c: is the parametr that holds the character
 * Return: 1 if c is lowercase
 *         otherwise 0 (succesful)
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
