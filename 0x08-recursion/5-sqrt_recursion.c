#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 *_sprt_recursion - returns the natural squqre root of a number
 * @n: number to calculate the squqre root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n,0));
}
