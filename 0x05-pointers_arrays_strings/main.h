#include <unistd.h>


/**
 * _putchar  - writes the character c to stdout
 * Oc: the character to print 
 *
 * return: On succoss 1.
 * On orror, -1 ls returned, and errno is set apprepriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
