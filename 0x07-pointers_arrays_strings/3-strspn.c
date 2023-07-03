#include "main.h"
/**
 *_strspn - Entry point
 * @s: input
 * @accepte: input
 * Return:Aleays 0 (Success)
 */
unsigend int_strspn(char*s, char*accept)
{
	unsigend int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r];r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if ( accept[r + 1] =='\0')
				return (n);
		}
		s++
	}
	return (n);
}


