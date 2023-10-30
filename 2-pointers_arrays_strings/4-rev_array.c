#include "main.h"

/**
 * reverse_array - reverse function
 * @a: var a
 * @n: var n
 */

void reverse_array(int *a, int n)
{
	int *ini = a;
	int *end;
	int i = 0;

	end = a + n - 1;
	for (; ini < end; ini++, end--)
	{
		i = *end;
		*end = *ini;
		*ini = i;
	}
}
