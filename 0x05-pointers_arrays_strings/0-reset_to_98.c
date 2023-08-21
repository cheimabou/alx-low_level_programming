#include "main.h"
/**
 * reset_to_98 - a function that reset the value of the parameter to 98
 * @n: the parameter
*/
void reset_to_98(int *n)
{
	int var;

	var = 98;
	n = &var;
}
