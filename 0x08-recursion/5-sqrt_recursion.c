#include "main.h"
/**
 * _sprt_recursion - returns the natural squqre root of a number
 * @n: number to calculate the squqre root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_aqrt_recursion(n,0));
}
