#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: operator passed as argument
 */

int (*get_op_func(char *s))(int, int)
{

