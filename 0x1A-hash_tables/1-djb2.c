#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * str: to generate hash value.
 *
 * Return: thr hash vaule.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;
	
	while (c = *str++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	
	return hash;
}
