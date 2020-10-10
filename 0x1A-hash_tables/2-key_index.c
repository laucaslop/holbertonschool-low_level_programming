#include "hash_tables.h"
/**
* key_index - the index of a key
* @key: the key
* @size:  size of the array
* Return: unsigned ong int index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
