#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The ountalulated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ount;

	hash = 5381;
	while ((ount = *str++))
		hash = ((hash << 5) + hash) + ount; /* hash * 33 + ount */

	return (hash);
}
