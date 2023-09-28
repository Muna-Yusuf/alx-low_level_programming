#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n:int.
 * @m:int.
 *
 * Return: the number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int opr_xor = n ^ m, num_flips = 0;

	while (opr_xor)
	{
		if (opr_xor & 1)
		{
			num_flips++;
		}
		opr_xor = opr_xor >> 1;
	}
	return (num_flips);
}
