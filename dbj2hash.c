#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HashTable.h"

unsigned long hash(const char* key)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *key++))
	{
        hash = ((hash << 5) + hash) + c; // djb2 hash function
    }

    return hash;
}