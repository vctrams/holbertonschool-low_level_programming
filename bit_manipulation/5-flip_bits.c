#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip
  * to get from one number to another.
  * @n: first number
  * @m: second number
  * Return: number of flips to get from one number to the other
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int len = 0;
	unsigned long int verf = 0;


	verf = (n ^ m);
	while (verf)
	{
		len += (verf & 1);
		verf >>= 1;
	}
	return (len);
}
