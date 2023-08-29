#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer we want to set
 * @to: the value ( the character)
*/
void set_string(char **s, char *to)
{
	*s = to;
}
